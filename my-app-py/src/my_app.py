###########################################################################
# Setup code goes below, this is called once at the start of the program: #
###########################################################################
import micropython
micropython.alloc_emergency_exception_buf(100)
import time
import network
import socket
import ujson
from machine import Pin, PWM, I2C, Timer
from eeprom import eeprom

#Debug LED zuweisen
LED0 = Pin(2,Pin.OUT)

#Pinzuweisung für I2C-Bus
i2c = I2C(scl=Pin(14), sda=Pin(2), freq=100000)
#Ausgabe angeschlossener Adressen am I2C-Bus
print('I2C Scan Start: ')
print(i2c.scan())

#Initialisierung EEPROM
eep = eeprom(i2c,80)
if ord(eep.FLAG.read()) != 1:
    print('Init EEPROM...')
    eep.MODF.set()
    eep.LTYP.set()
    eep.TOPWL.set()
    eep.TOPWH.set()
    eep.TOPRL.set()
    eep.TOPRH.set()
    eep.TOPGL.set()
    eep.TOPGH.set()
    eep.TOPBL.set()
    eep.TOPBH.set()
    eep.KVR0.set()
    eep.KVG0.set()
    eep.KVB0.set()
    eep.PWMH.set()
    eep.DIMV.set()
    eep.PWMF.set()
    eep.FLAG.set()
#Farb-LEDs zuweisen
red_top = ord(eep.TOPRH.read()) * 256 + ord(eep.TOPRL.read())
red_pwm = (ord(eep.KVR0.read()) * red_top) / 255
red = PWM(Pin(12), freq=250, duty=int(red_pwm))
green_top = ord(eep.TOPGH.read()) * 256 + ord(eep.TOPGL.read())
green_pwm = (ord(eep.KVG0.read()) * green_top) / 255
green = PWM(Pin(15), freq=250, duty=int(green_pwm))
blue_top = ord(eep.TOPBH.read()) * 256 + ord(eep.TOPBL.read())
blue_pwm = (ord(eep.KVB0.read()) * blue_top) / 255
blue = PWM(Pin(4), freq=250, duty=int(blue_pwm))
#Helligkeit der weißen LEDs zugewiesen
lux_top =  ord(eep.TOPWH.read()) * 256 + ord(eep.TOPWL.read())
print(lux_top)
lux_pwm = (ord(eep.DIMV.read()) * lux_top) / 100
print(lux_pwm)
lux = PWM(Pin(0), freq=250, duty=int(lux_pwm))
#Lüftergeschwindigkeit als PWM-Ausgang zugewiesen
fan_pwm = (ord(eep.PWMF.read()) * 1023) / 100
fan = PWM(Pin(5), freq=250, duty=int(fan_pwm))
#Bewegungsensor Eingang
motion_sensor = Pin(16,Pin.IN)
motion_detect = False
motion_counter = 0
#Ausgang für Heizung
heater = Pin(13,Pin.OUT)
heater_duty = ord(eep.PWMH.read())
heater_counter = 0

#Ausgabe der aktuellen Einstellungen
print('LEDs: Red = ' + str(red.duty()) + ', Green = ' + str(green.duty()) + ', Blue = ' + str(blue.duty()) + '\r')
print('Lumen: ' + str(lux.duty()) + '\r')
print('Fan: ' + str(fan.duty()) + '\r')
print('Heater: ' + str(heater_duty) + '\r')

#Einrichtung des WLANs
ap_if = network.WLAN(network.AP_IF)
ap_if.config(essid='LEDHeater', channel=11, password='1234qwer', dhcp_hostname='LEDHeater', authmode=3)
ap_if.ifconfig(('192.168.4.1', '255.255.255.0', '192.168.4.1', '8.8.8.8'))
#Ausgabe WLAN Einstellungen
print("Access point active: " + str(ap_if.active()))
print("\rIP-Config: " + str(ap_if.ifconfig()))

def MotionSensor():
    global motion_detect, motion_counter
    if motion_sensor.value() == 0:
        if motion_detect != True:
            print('Motion Detection: True\r')
        motion_detect = True
        motion_counter = 10
    else:
        if motion_counter > 0:
            motion_counter = motion_counter - 1
        else:
            if motion_detect != False:
                print('Motion Detection: False\r')
            motion_detect = False

def Heating():
    global heater_duty, heater_counter
    heater_counter = heater_counter + 1
    if heater_counter < heater_duty:
        heater.value(1)
    elif heater_counter < 100:
        heater.value(0)
    else:
        heater_counter = 0
        heater.value(1)

tim_motion = Timer(-1)
tim_heater = Timer(-1)
#tim.init(period=5000, mode=Timer.ONE_SHOT, callback=lambda t:print(1))
tim_motion.init(period=5, mode=Timer.PERIODIC, callback=lambda t:MotionSensor())
tim_heater.init(period=600, mode=Timer.PERIODIC, callback=lambda t:Heating())

#Integration eines Webservers mit Websocketunterstützung
from ws_connection import ClientClosedError
from ws_server import WebSocketServer, WebSocketClient
from ws_multiserver import WebSocketMultiServer

class WSClient(WebSocketClient):
    def __init__(self, conn):
        super().__init__(conn)

    def process(self):
        try:
            global heater_duty
            msg = self.connection.read()
            if not msg:
                return
            msg = msg.decode("utf-8")
            print(msg)
            #Falls der Speicher zwei oder mehr Befehle enthält, wird dieser aufgeteilt
            items = msg.replace("}{", "}#{").split("#")
            #Wenn mehrere Befehle empfangen wurden, werden diese nacheinander durchlaufen
            for x in items:
                tmp = ujson.loads(x)
                if tmp['method'] == "PWM.SetDC":
                    PWM(Pin(int(tmp['params']['Pin'])), freq=int(tmp['params']['Frequency']), duty=int(tmp['params']['Duty']))
                    print('Pin: ' + str(tmp['params']['Pin']) + ', Duty: ' + str(PWM(Pin(int(tmp['params']['Pin']))).duty()) + ', Freq: ' +  str(PWM(Pin(int(tmp['params']['Pin']))).freq()) + '\r')
                elif tmp['method'] == "PWM.SetColor":
                    red.duty(int(tmp['params']['Red']) * 4)
                    eep.KVR0.write(int(tmp['params']['Red']))
                    green.duty(int(tmp['params']['Green']) * 4)
                    eep.KVG0.write(int(tmp['params']['Green']))
                    blue.duty(int(tmp['params']['Blue']) * 4)
                    eep.KVB0.write(int(tmp['params']['Blue']))
                    print('LEDs: Red = ' + str(red.duty()) + ', Green = ' + str(green.duty()) + ', Blue = ' + str(blue.duty()) + '\r')
                elif tmp['method'] == "PWM.SetLx":
                    global lux_top
                    lux.duty(int((int(tmp['params']['lx']) * lux_top) / 100))
                    eep.DIMV.write(int(tmp['params']['lx']))
                    print('Lumen: ' + str(lux.duty()) + '\r')
                elif tmp['method'] == "PWM.SetTemp":
                    heater_duty = int(tmp['params']['Temp'])
                    eep.PWMH.write(int(tmp['params']['Temp']))
                    print('Heater: ' + str(heater_duty) + '\r')
                elif tmp['method'] == "PWM.SetFan":
                    fan.duty(int((int(tmp['params']['Fan']) * 1023) / 100))
                    eep.PWMF.write(int(tmp['params']['Fan']))
                    print('Fan: ' + str(fan.duty()) + '\r')
                elif tmp['method'] == "Init.Socket":
                    msg = {"id":"21061979",
                           "method": "PWM.GetColor",
                           "params": {"Red": str(int(red.duty() / 4)),
                                      "Green": str(int(green.duty() / 4)),
                                      "Blue": str(int(blue.duty() / 4))
                                     }
                           }
                    self.connection.write(ujson.dumps(msg))
                    msg = {"id":"21061979",
                           "method": "PWM.GetLx",
                           "params": {"lx": str(int((lux.duty() * 100) / 1023))
                                     }
                           }
                    self.connection.write(ujson.dumps(msg))
                    msg = {"id":"21061979",
                           "method": "PWM.GetTemp",
                           "params": {"Temp": str(int(heater_duty))
                                     }
                           }
                    self.connection.write(ujson.dumps(msg))
                    msg = {"id":"21061979",
                          "method": "PWM.GetFan",
                          "params": {"Fan": str(int((fan.duty() * 100) / 1023))
                                    }
                          }
                    self.connection.write(ujson.dumps(msg))
                else:
                    return 0
        except ClientClosedError:
            self.connection.close()


class WSServer(WebSocketMultiServer):
    def __init__(self):
        super().__init__("index.html", 2)

    def _make_client(self, conn):
        return WSClient(conn)


server = WSServer()
server.start()
try:
    while True:
        server.process_all()
except KeyboardInterrupt:
    tim_motion.deinit()
    tim_heater.deinit()
    pass
server.stop()

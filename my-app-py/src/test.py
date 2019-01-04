###########################################################################
# Setup code goes below, this is called once at the start of the program: #
###########################################################################
import time
import network
import socket
from machine import Pin, PWM, I2C
LED0 = Pin(2,Pin.OUT)
red = PWM(Pin(12), freq=250, duty=512)
green = PWM(Pin(15), freq=250, duty=512)
blue = PWM(Pin(4), freq=250, duty=512)
lux = PWM(Pin(0), freq=250, duty=512)
fan = PWM(Pin(5), freq=250, duty=512)
heater = PWM(Pin(13), freq=250, duty=100)

i2c = I2C(scl=Pin(14), sda=Pin(2), freq=100000)

print('I2C Scan Start: \r')
print(i2c.scan())

ap_if = network.WLAN(network.AP_IF)
ap_if.config(essid='LEDHeater', channel=11, password='1234qwer', dhcp_hostname='LEDHeater', authmode=3)
ap_if.ifconfig(('192.168.4.1', '255.255.255.0', '192.168.4.1', '8.8.8.8'))
print(ap_if.active())
print(ap_if.ifconfig())

html = """<!DOCTYPE html>
<html>
    <head> <title>ESP8266 Pins</title> </head>
    <body> <h1>ESP8266 Pins</h1>
        <table border="1"> <tr><th>Pin</th><th>Value</th></tr> %s </table>
    </body>
</html>
"""
pins = [Pin(i, Pin.IN) for i in (0, 2, 4, 5, 12, 13, 14, 15)]
addr = socket.getaddrinfo('0.0.0.0', 80)[0][-1]
s = socket.socket()
s.bind(addr)
s.listen(1)
print('listening on', addr)

while True:
    ###################################################################
    # Loop code goes inside the loop here, this is called repeatedly: #
    ###################################################################
    time.sleep(1.0)  # Delay for 1 second.
    if LED0.value() > 0:
        LED0.off()
    else:
        LED0.on()

    cl, addr = s.accept()
    print('client connected from', addr)
    cl_file = cl.makefile('rwb', 0)
    while True:
        line = cl_file.readline()
        if not line or line == b'\r\n':
            break
    rows = ['<tr><td>%s</td><td>%d</td></tr>' % (str(p), p.value()) for p in pins]
    response = html % '\n'.join(rows)
    cl.send(response)
    cl.close()

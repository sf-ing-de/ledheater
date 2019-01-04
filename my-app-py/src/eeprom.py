import time

class memory:
    def __init__(self, address, init, i2c, i2c_add):
        self.i2c = i2c
        self.i2c_add = i2c_add
        self.add = address
        self.init = init
    def write(self, value):
        if bytearray([value]) != self.i2c.readfrom_mem(self.i2c_add,self.add,1):
            self.i2c.writeto_mem(self.i2c_add,self.add,bytearray([value]))
            time.sleep_ms(5)
    def read(self):
        return self.i2c.readfrom_mem(self.i2c_add,self.add,1)
    def set(self):
        self.i2c.writeto_mem(self.i2c_add,self.add,bytearray([self.init]))
        time.sleep_ms(5)
class eeprom:
    def __init__(self, i2c, i2c_add):
        self.i2c = i2c
        self.i2c_add = i2c_add
        self.MODF = memory(21, 3, self.i2c, self.i2c_add)
        self.LTYP = memory(22, 5, self.i2c, self.i2c_add)
        self.TOPWL = memory(40, 0xFF, self.i2c, self.i2c_add)
        self.TOPWH = memory(41, 0x03, self.i2c, self.i2c_add)
        self.TOPRL = memory(42, 0xFF, self.i2c, self.i2c_add)
        self.TOPRH = memory(43, 0x03, self.i2c, self.i2c_add)
        self.TOPGL = memory(44, 0xFF, self.i2c, self.i2c_add)
        self.TOPGH = memory(45, 0x03, self.i2c, self.i2c_add)
        self.TOPBL = memory(46, 0xFF, self.i2c, self.i2c_add)
        self.TOPBH = memory(47, 0x03, self.i2c, self.i2c_add)
        self.KVR0 = memory(53, 0, self.i2c, self.i2c_add)
        self.KVG0 = memory(58, 0, self.i2c, self.i2c_add)
        self.KVB0 = memory(63, 0, self.i2c, self.i2c_add)
        self.PWMH = memory(71, 0, self.i2c, self.i2c_add)
        self.FLAG = memory(72, 0x01, self.i2c, self.i2c_add)
        self.DIMV = memory(73, 0, self.i2c, self.i2c_add)
        self.PWMF = memory(75, 0, self.i2c, self.i2c_add)

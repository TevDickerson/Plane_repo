import serial
import time
import sys

MASK_CH_ID = 0b01111000  # 0x78


ser = serial.Serial(port="/dev/serial0",
                    baudrate=115200,
                    bytesize=serial.EIGHTBITS,
                    parity=serial.PARITY_NONE,
                    stopbits=serial.STOPBITS_ONE)

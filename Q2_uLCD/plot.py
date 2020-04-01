import matplotlib.pyplot as plt
import numpy as np
import serial
import time

t = np.arange(0, 12.8, 0.1)
y = np.arange(0, 12.8, 0.1)

serdev = '/dev/ttyACM0'
s = serial.Serial(serdev)

for x in range(0, 128):
	line=s.readline()
	print(line)
	y[x] = int(line)

plt.plot(t,y)
plt.show()
s.close()
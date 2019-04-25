import os
import numpy as np
import matplotlib.pyplot as plt


a = os.system("g++ archivo.cpp -o archivo.x")
a = os.system("./archivo.x > archivo.dat")

plt.figure()
data = np.loadtxt("archivo.dat")
plt.plot(data)
plt.savefig("imagen.png")
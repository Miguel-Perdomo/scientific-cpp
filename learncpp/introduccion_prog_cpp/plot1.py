import matplotlib.pyplot as plt
import numpy as np

x, y = np.genfromtxt("datos_grafica1.txt", unpack=True)

plt.plot(x, y, label="data")
plt.savefig("plot:primes.pdf")
                         
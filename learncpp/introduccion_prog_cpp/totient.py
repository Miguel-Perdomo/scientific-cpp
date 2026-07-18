import matplotlib.pyplot as plt
import numpy as np

x, y = np.genfromtxt("FuncionEuler.txt", unpack=True)


plt.figure(figsize=(12,8))
plt.plot(x, y, "o", label="data", color = "darkblue", markersize = 3) # No olvidar comillas en el color. makersize es tamaño de los puntos
plt.xlabel("n", fontsize = 18)
plt.ylabel(r"$\Phi$(n)", fontsize = 18) # con el r antes de los nombres le activo latex bueno, un latex sencillo
plt.xticks(fontsize = 18)
plt.yticks(fontsize = 18)
plt.grid(True, alpha = 0.5)
plt.savefig("totient.pdf")

                         
import matplotlib.pyplot as plt
import numpy as np

datos = np.loadtxt("clasif_num.txt", dtype=float)
n = datos[:, 0] # asi podemos elegir que es cada columna
suma = datos[:, 1]
tipo = datos[:, 2]


plt.figure(figsize=(12,8))
plt.plot(n, suma, "o", label="data", color = "darkblue", markersize = 3) # No olvidar comillas en el color. makersize es tamaño de los puntos
plt.xlabel("n", fontsize = 18)
plt.ylabel(r"Suma divisores", fontsize = 18) # con el r antes de los nombres le activo latex bueno, un latex sencillo
plt.xticks(fontsize = 18)
plt.yticks(fontsize = 18)
plt.grid(True, alpha = 0.5)
plt.savefig("numeros_perfectos.pdf")

                         
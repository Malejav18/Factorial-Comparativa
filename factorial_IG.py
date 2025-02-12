import time
import matplotlib.pyplot as plt

def factorial(x):
    n = 1
    for i in range(1, x + 1):
        n *= i
    return n

valores = [5, 50, 500]
tiempo_ejecucion = []

times = []
for val in valores:
    t0 = time.time()
    factorial(val)
    t1 = time.time()
    times.append(t1 - t0)
    print(f"Tiempo de ejecución ({val}): {t1 - t0:.8f} segundos")

plt.bar(valores, times, color='blue', width=20)
plt.xlabel('x')
plt.ylabel('Tiempo de ejecución (segundos)')
plt.title('Factorial Iterativo')
plt.xticks(valores, rotation=45)
plt.grid(axis='y', linestyle='--', alpha=0.7)
plt.show()
import time

# Función factorial recursivo
def factorial_recursivo(x):
    if x == 1:
        return 1
    else:
        return x * factorial_recursivo(x - 1)

# Función para medir el tiempo promedio con mayor precisión
def medir_tiempo(func, n, repeticiones=10):
    tiempos = []
    for _ in range(repeticiones):
        t0 = time.perf_counter()  # Usar perf_counter para mayor precisión
        func(n)
        t1 = time.perf_counter()
        tiempos.append(t1 - t0)
    return sum(tiempos) / len(tiempos)

# Valores para realizar las pruebas
valores_n = [5, 50, 500]

# Realizar las pruebas para cada valor de n
for n in valores_n:
    # Tiempo promedio recursivo
    tiempo_recursivo = medir_tiempo(factorial_recursivo, n)
    print(f"Tiempo promedio recursivo para n = {n}: {tiempo_recursivo:.10f} segundos")

# Factorial-Comparativa

Integrantes:

- Eduardo Hincapie
- Josh Lopez
- Miguel Suarez
- Alejandra Vargas

En este repositorio se puede encontrar la función de factorial, implementada de manera iterativa y recursiva en el lenguaje C y Python. El propósito de esta actividad es realizar una comparación entre un lenguaje interpretado y uno compilado en una misma máquina.

## Proceso

Se realizaron dos códigos de la función factorial, de manera iterativa y recursiva en los lenguajes python y c, ambos adjuntos en los archivos de este repositorio. Estos códigos proporcionan el tiempo que demora realizar esta función al cálcular el factorial de 5, 50 u 500. Además para realizar una comparación más precisa las pruebas se realizaron en una misma maquina; las características de la misma son las siguientes:

- Mackbook Air 13' modelo 2019
- **Procesador:** 1,6 GHz Dual-Core Intel Core i5
- **RAM:** 8 GB 2133 MHz LPDDR3

## Resultados
Los resultados obtenidos son los siguientes:

## Python

### Iterativo
- Tiempo de ejecucion (5):  3.814697265625e-06 segundos 0.00000191
- Tiempo de ejecucion (50):  5.9604644775390625e-06 segundos 0.00002289
- Tiempo de ejecucion (500):  0.00010395050048828125 segundos 0.00009418
![iterativoPy](https://github.com/user-attachments/assets/5291c59c-93a3-4385-9f34-7400151313e0)

### Recursivo
- Tiempo de ejecucion (5):  2.86102294921875e-06 segundos 0.00000215
- Tiempo de ejecucion (50):  0.0001361370086669922 segundos 0.00003600
- Tiempo de ejecucion (500):  0.0008399486541748047 segundos 0.00052524
![recursivoPy](https://github.com/user-attachments/assets/f7a16c27-2099-428c-886f-796d693a1fbf)

## C

### Iterativo
- Tiempo de ejecucion (5):  0.00000003 segundos
- Tiempo de ejecucion (50):  0.00000016 segundos
- Tiempo de ejecucion (500):  0.00000115 segundos

### Recursivo
- Tiempo de ejecucion (5):  0.00000004 segundos
- Tiempo de ejecucion (50):  0.00000050 segundos
- Tiempo de ejecucion (500):  0.00000556 segundos


## Análisis de resultados
Al realizar la comparación directa entre los tiempos de ejecución, se evidencia que la ejecución del programa es más rápida en el lenguaje compilado (C) que en el lenguaje interpretado (Python). Esto se asocia con la diferencia fundamental en la forma en que ambos lenguajes ejecutan el código: mientras que C es un lenguaje compilado que se traduce a código de máquina optimizado antes de ejecutarse, Python es un lenguaje interpretado, lo que significa que cada instrucción se evalúa en tiempo de ejecución, añadiendo sobrecarga y reduciendo la velocidad de ejecución.

Además, la comparación directa entre el proceso iterativo y el recursivo nos permite obtener que el proceso recursivo es más lento que el iterativo cuando el valor de número factorial va aumentando. Esto se debe a que la recursión implica llamadas a funciones adicionales, lo que genera una sobrecarga por cada llamada, además de que los valores intermedios deben almacenarse en la pila, lo que aumenta el tiempo de ejecución y el uso de memoria a medida que el número factorial crece.

No obstante, cabe agregar que el resultado de la operación involucra obtener un valor demasiado grande, tanto que no se puede guardar en las variables convencionales de dichos lenguajes, pues el tipo unsigned long long int permite un tamaño máximo de 18,446,744,073,709,551,615, lo cual no es suficiente para guardar siquiera el valor de 50!. Por lo tanto, si se quiere tanto calcular como imprimir el valor del factorial, es necesario almacenar los dígitos en un arreglo e imprimirlos posteriormente. Este proceso requiere a su vez un tiempo de ejecución propio y cada vez mayor, lo cual influye en los tiempos resultantes obtenidos y dificulta el análisis. Estos resultados se muestran a continuación.




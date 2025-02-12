# Factorial-Comparativa

Integrantes:

- Eduardo Hincapie
- Josh Lopez
- Miguel Suarez
- Alejandra Vargas

En este repositorio se puede encontrar la función de factorial, implementada de manera iterativa y recursiva en el lenguaje C y Python. El propósito de esta actividad es realizar una comparación entre un lenguaje interpretado y uno compilado en una misma máquina.

## Proceso

Se realizaron dos códigos de la función factorial, de manera iterativa y recursiva en los lenguajes python y c, ambos adjuntos en los archivos de este repositorio. Estos códigos proporcionan el tiempo que demora realizar esta función al cálcular el factorial de 5, 50 u 500. Además para realizar una comparación más precisa las pruebas se realizaron en una misma maquina; las características de la misma son las siguientes:

- **Sistema Operativo:** Microsoft Windows 11
- **Procesador:** Intel(R) Core(TM) i7-9750H CPU @ 2.60GHz
- **RAM:** 8 GB

## Resultados
Los resultados obtenidos son los siguientes:

## Python

### Iterativo
- Tiempo de ejecucion (5): 0.0000028100 segundos
- Tiempo de ejecucion (50): 0.0000078600 segundos
- Tiempo de ejecucion (500): 0.0001024900 segundos
![iterativoPy](https://github.com/user-attachments/assets/b686c3c2-c498-482a-8975-b927ea014add)

### Recursivo
- Tiempo de ejecucion (5): 0.0000042200 segundos
- Tiempo de ejecucion (50): 0.0000353800 segundos
- Tiempo de ejecucion (500): 0.0003813200 segundos
![recursivoPy](https://github.com/user-attachments/assets/260f6b01-4340-45ab-bf4e-d5666a7084a2)

### Comparación iterativo y recursivo
![compPy](https://github.com/user-attachments/assets/cdf65217-bc01-4ac3-8384-d029db18f8a3)

## C

### Iterativo
- Tiempo de ejecucion (5): 0.00000003 segundos
- Tiempo de ejecucion (50): 0.00000013 segundos
- Tiempo de ejecucion (500): 0.00000108 segundos

![iterativoC](https://github.com/user-attachments/assets/bb055290-c1a1-40d7-979c-e253c4c1b000)

### Recursivo
- Tiempo de ejecucion (5): 0.00000004 segundos
- Tiempo de ejecucion (50): 0.00000046 segundos
- Tiempo de ejecucion (500): 0.00000517 segundos

![recursivoC](https://github.com/user-attachments/assets/9686afa9-fa37-4dea-a2b2-3bfd3acc3b7f)

### Comparación iterativo y recursivo
![compC](https://github.com/user-attachments/assets/8ceb2c79-856c-452f-9be8-a047eae9815a)

## Análisis de resultados
Al realizar la comparación directa entre los tiempos de ejecución, se evidencia que la ejecución del programa es más rápida en el lenguaje compilado (C) que en el lenguaje interpretado (Python). Esto se asocia con la diferencia fundamental en la forma en que ambos lenguajes ejecutan el código: mientras que C es un lenguaje compilado que se traduce a código de máquina optimizado antes de ejecutarse, Python es un lenguaje interpretado, lo que significa que cada instrucción se evalúa en tiempo de ejecución, añadiendo sobrecarga y reduciendo la velocidad de ejecución.

Además, la comparación directa entre el proceso iterativo y el recursivo nos permite obtener que el proceso recursivo es más lento que el iterativo cuando el valor de número factorial va aumentando. Esto se debe a que la recursión implica llamadas a funciones adicionales, lo que genera una sobrecarga por cada llamada, además de que los valores intermedios deben almacenarse en la pila, lo que aumenta el tiempo de ejecución y el uso de memoria a medida que el número factorial crece.

No obstante, cabe agregar que el resultado de la operación involucra obtener un valor demasiado grande, tanto que no se puede guardar en las variables convencionales de dichos lenguajes, pues el tipo unsigned long long int permite un tamaño máximo de 18,446,744,073,709,551,615, lo cual no es suficiente para guardar siquiera el valor de 50!. Por lo tanto, si se quiere tanto calcular como imprimir el valor del factorial, es necesario almacenar los dígitos en un arreglo e imprimirlos posteriormente. Este proceso requiere a su vez un tiempo de ejecución propio y cada vez mayor, lo cual influye en los tiempos resultantes obtenidos y entorpece el análisis. Los códigos se encuentran adjuntos en la carpeta calculo&tiempo. Estos resultados se muestran a continuación.

## C

# Factorial de 5:

Iterativo: 120

Iterativo tiempo: 0.00000020 segundos

Recursivo: 120

Recursivo tiempo: 0.00000020 segundos

# Factorial de 50:

Iterativo: 30414093201713378043612608166064768844377641568960512000000000000

Iterativo tiempo: 0.00000680 segundos

Recursivo: 30414093201713378043612608166064768844377641568960512000000000000

Recursivo tiempo: 0.00000680 segundos

# Factorial de 500:

Iterativo:
1220136825991110068701238785423046926253574342803192842192413588385845373153881997605496447502203281863013616477148203584163378722078177200480785205159329285477907571939330603772960859086270429174547882424912726344305670173270769461062802310452644218878789465754777149863494367781037644274033827365397471386477878495438489595537537990423241061271326984327745715546309977202781014561081188373709531016356324432987029563896628911658974769572087926928871281780070265174507768410719624390394322536422605234945850129918571501248706961568141625359056693423813008856249246891564126775654481886506593847951775360894005745238940335798476363944905313062323749066445048824665075946735862074637925184200459369692981022263971952597190945217823331756934581508552332820762820023402626907898342451712006207714640979456116127629145951237229913340169552363850942885592018727433795173014586357570828355780158735432768888680120399882384702151467605445407663535984174430480128938313896881639487469658817504506926365338175055478128640000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

Iterativo tiempo: 0.00108070 segundos

Recursivo:
1220136825991110068701238785423046926253574342803192842192413588385845373153881997605496447502203281863013616477148203584163378722078177200480785205159329285477907571939330603772960859086270429174547882424912726344305670173270769461062802310452644218878789465754777149863494367781037644274033827365397471386477878495438489595537537990423241061271326984327745715546309977202781014561081188373709531016356324432987029563896628911658974769572087926928871281780070265174507768410719624390394322536422605234945850129918571501248706961568141625359056693423813008856249246891564126775654481886506593847951775360894005745238940335798476363944905313062323749066445048824665075946735862074637925184200459369692981022263971952597190945217823331756934581508552332820762820023402626907898342451712006207714640979456116127629145951237229913340169552363850942885592018727433795173014586357570828355780158735432768888680120399882384702151467605445407663535984174430480128938313896881639487469658817504506926365338175055478128640000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

Recursivo tiempo: 0.00108480 segundos


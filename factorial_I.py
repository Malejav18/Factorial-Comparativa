import time
def factorial (x):
    n=1
    for i in range(1,x+1):
        n*=i
    return n

t0=time.time()
x=factorial(5)
t1=time.time()
print("tiempo de ejecucion (5): ", t1-t0)

t0=time.time()
x=factorial(50)
t1=time.time()
print("tiempo de ejecucion (50): ", t1-t0)

t0=time.time()
x=factorial(500)
t1=time.time()
print("tiempo de ejecucion (500): ", t1-t0)
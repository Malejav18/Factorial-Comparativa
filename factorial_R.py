import time
def factorial (x):
    if(x<=1):
        return 1
    else:
        return x*factorial(x-1)

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
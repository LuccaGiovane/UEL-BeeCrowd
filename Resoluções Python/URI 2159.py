import math
n = int(input())
minimo = n/math.log(n)
maximo = minimo*1.25506
print("%.1f"%minimo+" "+"%.1f"%maximo)

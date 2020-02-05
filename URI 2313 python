import math
a,b,c = map(int,input().split())
if (abs(b - c) < a < b + c) and (abs( a - c ) < b < a + c) and (abs( a - b ) < c < a + b):
    print("Valido-",end='')
    if a==b==c:
        print("Equilatero")
    elif a==b or a==c or b==c:
        print("Isoceles")
    elif a!=b and b!=c and c!=a:
        print("Escaleno")
    
    if a**2==b**2+c**2 or b**2==a**2+c**2 or c**2==b**2+a**2:
        print("Retangulo: S")
    else:
        print("Retangulo: N")
else:
    print("Invalido")

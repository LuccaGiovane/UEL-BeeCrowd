n = int(input())

for i in range(n):
 tipo = input()
 rgb = list(map(int,input().split()))

 if tipo == 'eye':
  r = int(0.3*rgb[0] + 0.59*rgb[1] + 0.11*rgb[2])
 elif tipo == 'mean':
  r = sum(rgb)//3
 elif tipo == 'max':
  r = max(rgb)
 else:
  r = min(rgb)

 print("Caso #{}: {}".format(i+1, r))

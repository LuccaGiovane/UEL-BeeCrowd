x = int(input())
for i in range(x):
  lista = []
  y = int(input())
  for j in range(1, y):
    if(y % j == 0):
      lista.append(j)
  if(sum(lista) == y):
    print('%d eh perfeito' %y)
  else:
    print('%d nao eh perfeito' %y)

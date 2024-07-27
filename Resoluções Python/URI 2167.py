num = int(input())
velocidade = input().split()
lista = []
total = 0

while total < len(velocidade):
  lista.append(int(velocidade[total]))
  total += 1
pos = 0
x = lista[0]
cont = 1
cont1 = 0

for i in lista:
  if not i < x:
    cont1 += 1
  if i >= x :
    x = i
    pos+=1
 
  else:
    cont = pos
    break

if cont1 == len(velocidade):
  print('0')

else: 
  print(cont+1) 

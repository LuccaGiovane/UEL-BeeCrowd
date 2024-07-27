num = int(input())

anoes = 0
elfos = 0
humanos = 0
magos = 0
hobbits = 0

for i in range(num):
    nome, tipo = input().split()
    nome = str(nome)
    tipo = str(tipo)
     


    if tipo == "A":
        anoes = anoes + 1
    elif tipo == "E":
        elfos = elfos + 1
    elif tipo == "H":
        humanos = humanos + 1
    elif tipo == "M":
        magos = magos + 1
    elif tipo == "X":
        hobbits = hobbits + 1

print("%d Hobbit(s)"%hobbits)
print("%d Humano(s)"%humanos)
print("%d Elfo(s)"%elfos)
print("%d Anao(s)"%anoes)
print("%d Mago(s)"%magos)   

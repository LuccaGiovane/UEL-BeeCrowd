x = input()
x = x.split(' ')
p = int(x[0])
j1 = int(x[1])
j2 = int(x[2])
r = int(x[3])
a = int(x[4])

v = 0

if (j1 + j2) % 2 == 0:
    if p == 1:
        v = 1
    else:
        v = 2
else:
    if p == 0:
        v = 1
    else:
        v = 2

if r == 1 and a == 1:
    print('Jogador 2 ganha!')
elif r == 1 and a == 0:
    print('Jogador 1 ganha!')
elif r == 0 and a == 1:
    print('Jogador 1 ganha!')
elif r == 0 and a == 0:
    if v == 1:
        print('Jogador 1 ganha!')
    elif v == 2:
        print('Jogador 2 ganha!')

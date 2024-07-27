while True:
    try:
        num = int(input())
        numeros = []
        cont = 0
        while cont!=num:
            x = float(input())
            numeros.append(x)
            numeros.sort()
            cont = cont+1
        print(numeros[0])
    except EOFError:
        break

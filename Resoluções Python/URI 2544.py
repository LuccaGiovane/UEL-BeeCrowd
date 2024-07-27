while True:
    try:
        cont = 0
        num = int(input())
        while num > 1:
            num = num/2
            cont = cont+1
        print(cont)
    except EOFError:
        break

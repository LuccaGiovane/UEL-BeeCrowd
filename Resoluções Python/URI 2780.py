while True:
    try:
        n,q = [int(x) for x in input().split()]
        lista = []
        while n:
            n = n - 1
            lista.append(int(input()))
        lista.sort(reverse=True)
        while q:
            q = q - 1
            k = input()
            print(lista[int(k)-1])
    except EOFError:
        break

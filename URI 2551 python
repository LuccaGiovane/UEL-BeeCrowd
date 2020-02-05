while True:
    try:
        record = 0
        num = int(input())
        for i in range(num):
            tempo,distancia = map(int,input().split())
            a = distancia/tempo
            if a > record:
                record = a
                print(i+1)
    except EOFError:
        break

while True:
    try:
        k = input().split(":")
        hora = 0
        atraso = 0
        h,m = k
        h = int(h)
        m = int(m)
        h = h*60
        hora = h+m+60
        atraso = hora-480
        if atraso<0:
            print("Atraso maximo: 0")
        else:
            print("Atraso maximo: %d"%atraso)
    except EOFError:
        break

def sequencia(num):
    cont = 0
    resultado = "0 "
    while cont <= num:
        for i in range(cont):
            resultado += str(cont)+" "
        cont += 1
    return resultado
cont2 = 0
while True:
    try:
        cont2 += 1
        if cont2 != 1:
            print()
        n = int(input())
        resposta = sequencia(n)
        lista = resposta.split()
        qtd_numeros = len(lista)
        if qtd_numeros == 1:
            print("Caso "+str(cont2)+": 1 numero")
        else:
            print("Caso "+str(cont2)+": "+str(qtd_numeros)+" numeros")
        print(resposta[:-1])
        
    except:
        break

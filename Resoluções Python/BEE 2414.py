def main():
    entrada = input()
    valores = entrada.split()

    vetor = []

    for valor in valores:
        numero = int(valor)
        if numero == 0:
            break
        vetor.append(numero)

    if vetor:
        maior_valor = max(vetor)
        print(maior_valor)

main()
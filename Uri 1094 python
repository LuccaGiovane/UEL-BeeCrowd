num = int(input())
total_cobaias = 0
totcoelhos = 0
totratos = 0
totsapos = 0

for i in range(num):
    quantia, tipo = input().split()
    quantia = int(quantia)
    tipo =    str(tipo)
    total_cobaias = total_cobaias + quantia
    if tipo == "C":
        totcoelhos = totcoelhos + quantia
    elif tipo == "R":
        totratos = totratos + quantia
    elif tipo == "S":
        totsapos = totsapos + quantia
print("Total: %d cobaias"%total_cobaias)
print("Total de coelhos: %d"%totcoelhos)
print("Total de ratos: %d"%totratos)
print("Total de sapos: %d"%totsapos)
print("Percentual de coelhos: {:.2f} %".format((totcoelhos*100)/total_cobaias))
print("Percentual de ratos: {:.2f} %".format((totratos*100)/total_cobaias))
print("Percentual de sapos: {:.2f} %".format((totsapos*100)/total_cobaias))

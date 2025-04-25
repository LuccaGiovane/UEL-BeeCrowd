tamanho_album = int(input())
fig_compradas = int(input())

cont = 0
fig_diferentes = []

while(cont < fig_compradas):
	figura = int(input())

	if figura not in fig_diferentes:
		fig_diferentes.append(figura)

	cont += 1

cont = tamanho_album - len(fig_diferentes)

print(cont)

num = int(input())
for i in range(num):
	n = str(input())
	m = str(input())
	if n == "papel" and m == "papel":
		print("Ambos venceram")
	elif n == "ataque" and m == "pedra" or m == "papel" :
		print("Jogador 1 venceu")
	elif n == "pedra" and m == "papel":
		print("Jogador 1 venceu")
	elif n == "pedra" and m == "pedra":
		print("Sem ganhador")
	elif n == "ataque" and m == "ataque":
		print("Aniquilacao mutua")
	elif m == "ataque" and n == "pedra" or n == "papel":
		print("Jogador 2 venceu")
	elif m == "pedra" and n == "papel":
		print("Jogador 2 venceu")

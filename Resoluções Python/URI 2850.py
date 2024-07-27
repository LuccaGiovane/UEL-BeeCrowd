while True:
	try:
		x = str(input())
		if   x == "esquerda":
			print("ingles")
		elif x == "direita":
			print("frances")
		elif x == "nenhuma":
			print("portugues")
		elif x == "as duas":
			print("caiu")
	except EOFError:
		break

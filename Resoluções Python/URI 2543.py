while True:
	try:
		totalvid = 0
		casos,ident = map(int,input().split())
		for i in range(casos):
			busca,tipo = map(int,input().split())
			if busca == ident:
				if tipo == 0:
					totalvid = totalvid + 1
		print(totalvid)
	except EOFError:
		break

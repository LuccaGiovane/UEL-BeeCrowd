while True:
	try:
		num = int(input())
		somaA = 0
		somaB = 0
		for i in range(num):
			a,b = map(int,input().split())
			somaA = somaA +(a*b)
			somaB = somaB + b
		print("{:.4f}".format(somaA/(somaB*100)))
	except EOFError:
		break

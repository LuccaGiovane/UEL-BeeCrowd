num = int(input())
maior_nota = 0
ganhador = 0
for i in range(num):
	a,b = map(float,input().split())
	if  b >maior_nota:
		maior_nota = b
		ganhador   = a	
if maior_nota >=8:
	print("{:.0f}".format(ganhador))
elif maior_nota<8:
	print("Minimum note not reached")

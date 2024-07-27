num = int(input())
for i in range(num):
	x,y,z = map(int,input().split())
	if y <10 and x <10 and z ==1:
		print("0%d:0%d - A porta abriu!"%(x,y))
	elif y <10 and x <10 and z ==0:
		print("0%d:0%d - A porta fechou!"%(x,y))
	elif x<10 and z == 1:
		print("0%d:%d - A porta abriu!"%(x,y))
	elif y<10 and z == 1:
		print("%d:0%d - A porta abriu!"%(x,y))
	elif x<10 and z == 0:
		print("0%d:%d - A porta fechou!"%(x,y))
	elif y<10 and z == 0:
		print("%d:0%d - A porta fechou!"%(x,y))	
	elif z == 1:
		print("%d:%d - A porta abriu!"%(x,y))
	elif z == 0:
		print("%d:%d - A porta fechou!"%(x,y))

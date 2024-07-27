num = int(input())
soma = 0
for i in range(num):
	a,b = map(int,input().split())
	if a == 1001:
		soma = soma + 1.50*b
	if a == 1002:
		soma = soma + 2.50*b
	if a == 1003:
		soma = soma + 3.50*b
	if a == 1004:
		soma = soma + 4.50*b
	if a == 1005:
		soma = soma + 5.50*b
print("{:.2f}".format(soma))

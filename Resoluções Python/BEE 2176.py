msg = input()

cont = int(msg.count('1'))

if (cont % 2 == 0):
	msg = msg + '0'
else:
	msg = msg + '1'

print(msg)

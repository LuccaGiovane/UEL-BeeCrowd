#simple calculator that transforms an integer to Binary, Octal or Hexadecimal

flag = True
print("========== Wellcome to Integer converter ==========\nWrite 'quit' anytime to exit.")

while flag:
	num = input('Enter a integer number: ')
	if num == 'quit':
		flag = False
	else:
		num = int(num)

		print("========== Chose one option ==========\n[ 1 ] convert to BINARY.")
		print("[ 2 ] convert to OCTAL.\n[ 3 ] convert to  HEXADECIMAL.")

		option = input("Your option: ")
		if option == 'quit':
			flag = False
		else:
			option = int(option)

			if option == 1:
				print('{} converted to BINARY => {}'.format(num, bin(num)[2:]))
			elif option == 2:
				print('{} converted to OCTAL => {}'.format(num, oct(num)[2:]))
			elif option == 3:
				print('{} converted to HEXADECIMAL => {}'.format(num, hex(num)[2:]))
			else:
				print("Invalid option!!")
print("========== THANK YOU ==========")

i=1

while True:
  try:

    a=input()
    b=input()
    x=0
    for j in range(len(b)):

        if a==b[j:j+len(a)]:
            x=x+1

    print('Caso #{}:'.format(i))

    if b.count(a)==0:
        print('Nao existe subsequencia\n')

    else:
        print('Qtd.Subsequencias: %d'%(x))
        print('Pos: %d\n'%(b.rfind(a)+1))
    i=i+1
  except EOFError:
    break

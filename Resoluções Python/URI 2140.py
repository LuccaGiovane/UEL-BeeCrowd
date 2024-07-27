m = n = 1
while m != 0 and n != 0:
    n,m = map(int,input().split())
    if n== 0 and m ==0:
        break
    x = m-n
    if x == 7 or x ==12 or x==22 or x==52 or x==102 or x==15 or x==25 or x==55 or x==105 or x==30 or x==60 or x==110 or x==70 or x==120 or x==150:
        print("possible")
    else:
        print("impossible")

rest = int(input())
x,y  = map(int,input().split())
if x+y <=rest:
    print("Farei hoje!")
elif x+y>rest:
    print("Deixa para amanha!")

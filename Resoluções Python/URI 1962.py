quant = int(input())

while quant>0:
    anos = int(input())
    if anos <= 2014:
        print("%d D.C."%(2015-anos))
    else:
        print("%d A.C."%(anos - 2014))
    quant = quant-1

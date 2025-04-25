vetor = []
flag = 1

while flag != 0:
    flag = int(input())
    if flag != 0:
        vetor.append(flag)

for n in vetor:
    for i in range(n):
        linha = [abs(i - j) + 1 for j in range(n)]

        print(*[f"{x:3}" for x in linha])

    print()

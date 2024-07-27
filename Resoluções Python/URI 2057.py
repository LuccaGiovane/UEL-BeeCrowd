saida, tempo, fuso = map(int,input().split())

if saida == 0:
    saida = 24
horario_pais = saida+tempo+fuso
if horario_pais >24:
    horario_pais = horario_pais - 24
    print(horario_pais)
elif horario_pais == 24:
    horario_pais = 0
    print(horario_pais)
else:
    print(horario_pais)

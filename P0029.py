t = int(input())
l = []
s = []
num = [1, 2, 3, 4, 5, 6, 7, 8, 9, 0]
cont = 0
continuar = False
for i in range(t):
    cont = 0
    n = int(input())
    entrada = input()
    for i in entrada:
        if i.isdigit():
            l.append(int(i))
        elif i == '+' or i == '-':
            s.append(i)
    for i in range(len(num)):
        for j in range(n):
            fim = l[j]
            if s[j] == '+' and num[i] + fim <= 9:
                continuar = True
            elif s[j] == '-' and fim - num[i] >= 0:
                continuar = True
            else:
                continuar = False
                break
        if continuar == True:
            cont += 1
    print(n+1, cont)
    l.clear()
    s.clear()
from string import ascii_lowercase


n = int(input())
r = ''
for i in range(n):
    s = input()
    for j in s:
        if j not in r:
            r += j
alfa = ascii_lowercase
t = False
resposta = ''
for i in range(len(alfa)):
    t = False
    for j in range(len(r)):
        if alfa[i] == r[j]:
            t = True
            break
    if t == False:
        resposta += alfa[i]
print(resposta)
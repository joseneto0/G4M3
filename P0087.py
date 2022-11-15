n = int(input())
l = []
r = []
for i in range(n):
  num, valor = map(int, input().split())
  l.append(valor)
l.sort()
for i in l:
  if l.count(i) > 1 and i not in r:
    r.append(i)
resposta = []
for i in range(len(r)):
  fatorial = 1
  for j in range(l.count(r[i]), 1, -1):
    fatorial *= j
  resposta.append(fatorial)
rf = 1
for i in resposta:
  rf *= i
print(rf)
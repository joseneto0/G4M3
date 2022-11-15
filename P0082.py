n = int(input())
for i in range(n):
  l = list(map(int, input().split()))
  quadrado = min(l[:3])
  if quadrado == 0:
    quadrado = 1
  else:
    quadrado = 0
  Y = l[3]
  if Y == 1:
    Y = 0
  else:
    Y = 1
  losango = max([Y, quadrado])
  if losango == 0:
    X = 1
  else:
    X = 0
  losango2 = max(l[4:])
  quadrado2 = min([losango2, Y])
  if quadrado2 == 1:
    Z = 0
  else:
    Z = 1
  print(f"Caso {i+1}: {X} {Y} {Z}")
  X = Y = Z = 0
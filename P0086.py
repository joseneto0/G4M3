n = int(input())
c = 0
h = n * 2
while h > 0:
  n -= 1
  c += h
  h -= 2
  c += n
print(c)
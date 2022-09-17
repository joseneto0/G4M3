n = int(input())
c = c1 = 0
for i in range(1, n+1):
    if (n+1) % i == 0:
        c += 1
    if (n-1) % i == 0:
        c1 += 1
if c <= 2 and c1 <= 2:
    print(f'{n} TIA')
else:
    print(f'{n} NAH')
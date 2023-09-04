n, m = map(int, input().split())
matriz = []
c = 0
for i in range(n):
    matriz.append([1] * m)
matriz[n//2][m//2] = 0
for i in range(n):
    for j in range(m):
        if i == j:
            c += matriz[i][j]
        elif i + j == i + 1:
            c += matriz[i][j]
print(c + n - 1 + m - 1)
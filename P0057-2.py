N = int(input())
matriz = []
for i in range(N):
    matriz.append(list(input()))
for i in range(N):
    for j in range(N):
        if matriz[i][j] == 'M':
            matriz[i][j] = 2
        elif matriz[i][j] == 'C':
            matriz[i][j] = 1
        else:
            matriz[i][j] = 0
for linha in range(N):
    for coluna in range(N):
        if matriz[linha][coluna] == 2:
            for i in range(-1 , 1):
                for j in range(-1, 1):
                    if (linha + i >= 0) and (linha + i < N):
                           if (coluna + j >= 0) and (coluna + j < N):
                                if matriz[linha + i][coluna + j] > 0:
                                    cerco = True
                                else:
                                    print('FAIL')
                                    exit()
print('SUCCESS')
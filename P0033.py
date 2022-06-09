import operator
def main():
    lista = [0, 0, 0, 0, 0]
    st = 'BCDEF'
    poder = input()
    for i in range(len(poder)):
        if poder[i] == 'B':
            lista[0] += 1
        if poder[i] == 'C':
            lista[1] += 1
        if poder[i] == 'D':
            lista[2] += 1
        if poder[i] == 'E':
            lista[3] += 1
        if poder[i] == 'F':
            lista[4] += 1
    print(st[lista.index(max(lista))])

if __name__ == '__main__':
    main()
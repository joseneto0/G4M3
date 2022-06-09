def main():
    N = int(input())
    lista = []
    for i in range(N):
        nomes = input()
        if nomes not in lista:
            lista.append(nomes)
        else:
            pass
    for i in lista:
        print(i)


if __name__ == '__main__':
    main()
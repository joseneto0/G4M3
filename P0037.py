def main():
    X, Y = map(int, input().split())
    soma = X + Y
    divisoes = 0
    inicio = 1
    while inicio < soma + 1:
        if soma % inicio == 0:
            divisoes += 1
        inicio += 1
    if divisoes == 2:
        print('Xau')
    else:
        print('Xi')


if __name__ == '__main__':
    main()
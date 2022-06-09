def main():
    soma = 0
    lista = []
    for i in range(5):
        lista.append(int(input()))
    menor = min(lista)
    for i in lista:
        soma += i - menor
    print(soma)


if __name__ == "__main__":
    main()
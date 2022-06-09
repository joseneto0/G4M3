def main():
    lista = []
    while True:
        nomes = input()
        if nomes == 'FIM':
            break
        lista.append(nomes)
        print(nomes, lista.count(nomes))


if __name__ == "__main__":
    main()
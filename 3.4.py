def main():
    lista = []
    while True:
        nomes = input()
        if nomes == 'FIM':
            break
        elif nomes == 'PROXIMO':
            print(f'PROXIMO: {lista[0]}')
            lista.remove(lista[0])
        else:
            lista.append(nomes)
            print(f'FILA:', end=' ')
            for s in lista:
                print(f'{s}', end=' ')
            print()


if __name__ == "__main__":
    main()
def main():
    N = int(input())
    count = 0
    for i in range(N):
        frase = input().upper()
        if 'FADA' in frase:
            count += 1
    print(count)


if __name__ == '__main__':
    main()
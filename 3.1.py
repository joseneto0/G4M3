def main():
    N = int(input())
    valores = []
    for i in range(N):
        valores.append(int(input()))
    valores.sort()
    for s in valores:
        print(s)


if __name__ == "__main__":
    main()
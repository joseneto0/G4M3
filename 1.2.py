def main():
    N, E = map(int, input().split())
    soma = 0
    for i in range(N):
        valores = int(input())
        soma += valores
    if soma >= E:
      print('NADA PREOCUPANTE')
    elif soma >= E - 5:
      print('POUCO PREOCUPANTE')
    else:
      print('MUITO PREOCUPANTE')


if __name__ == "__main__":
    main()
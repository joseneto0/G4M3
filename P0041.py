from math import sqrt
def main():
    N = int(input())
    if sqrt(N) // 1 == sqrt(N):
        print('SIM')
    else:
        print('NAO')


if __name__ == '__main__':
    main()
n = int(input())
if n < 32:
    val = [int(input()) for i in range(n)]
    for i in range(n):
        print(val[i])
else:
    val = [int(input()) for i in range(n)]
    for i in range(32):
        print(val[i])
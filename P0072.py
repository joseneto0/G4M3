n = int(input())
l = list(map(int, input().split()))
for i in range(n):
    if l[i] < 0:
        for j in range(i, -1, -1):
            l[j] *= -1
print(*l)
n = int(input())
l1 = list(map(int, input().split()))
l2 = list(map(int, input().split()))
l3 = []
for i in range(n):
    if l1[i] > l2[i]:
        l3.append(l1[i])
    else:
        l3.append(l2[i])
print(*l3)
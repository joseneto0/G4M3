n = int(input())
v = 0
l = []
for i in range(n):
    s = input()
    v += len(s)
    if v <= 144:
        l.append(s)
for i in range(len(l)):
    print(l[i])
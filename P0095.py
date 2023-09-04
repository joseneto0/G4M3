n = int(input())
gol = False
for i in range(n):
    xb, yb = map(int, input().split())
    if gol == False:
        if xb < 0 and abs(xb) - 44 >= 1:
            gol = True
if gol == True:
    print('GOL')
else:
    print('LANCE QUE SEGUE')
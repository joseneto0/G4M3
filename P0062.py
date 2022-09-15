n = int(input())
bug = False
for i in range(n):
    ent = input()
    if 'B' in ent:
        bug = True
if bug == True:
    print('YES')
else:
    print('NO')
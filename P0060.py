num = list(map(int, input().split('.')))
if sum(num) % 8 == 0:
    print('BLOCK')
else:
    print('PASS')
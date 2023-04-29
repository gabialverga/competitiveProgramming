n = int(input())

lucky = [4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777]

ok = False
for l in lucky:
    if n%l == 0:
        ok = True
        break
if ok:
    print('YES')
else:
    print('NO')
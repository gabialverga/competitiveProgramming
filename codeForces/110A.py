n = input()

c4 = 0
c7 = 0

for i in n:
    if i == '4':
        c4 += 1
    elif i == '7':
        c7 += 1

if str(c4 + c7).replace('4','').replace('7','') == '':
    print('YES')
else:
    print('NO')
for i in range(1,6):
    l = input().split()
    if '1' in l:
        col = l.index('1')
        print(abs(3-i) + abs(2-col))
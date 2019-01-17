n,m = raw_input().split()
n = int(n)
if len(m)>n:
    print -1
elif m=='10':
    print '1'*(n-1)+'0'
else:
    print m*(n)
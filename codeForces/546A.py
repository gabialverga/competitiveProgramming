k, n, w = map(int, input().split())

an = k + (w-1)*k

s = (w*(k + an))/2

if s-n > 0:
    print(int(s-n))
else:
    print(0)
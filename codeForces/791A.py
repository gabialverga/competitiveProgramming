l, b = map(int, input().split())

y = 0
while(l <= b):
    l = 3*l
    b = 2*b
    y += 1
print(y)
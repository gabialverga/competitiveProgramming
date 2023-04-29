n = int(input())

c = 0
m = 0
for i in range(n):
    a, b = map(int, input().split())
    c = c - a + b
    if (c > m):
        m = c
print(m)
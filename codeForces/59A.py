s = input()

u = 0

for c in s:
    if c.isupper():
        u += 1

if u > (len(s)-u):
    print(s.upper())
else:
    print(s.lower())
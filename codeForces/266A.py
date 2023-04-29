n = input()
s = input()

remove = 0
last = s[0]
for i in range(1, len(s)):
    if s[i] != last:
        last = s[i]
    else:
        remove += 1

print(remove)
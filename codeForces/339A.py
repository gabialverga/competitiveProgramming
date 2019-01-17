s = raw_input()
n = []
for x in s:
	if x != "+":
		n.append(x)
n.sort()
r = ""
j=0
for i in range(2*len(n)-1):
	if i%2==0:
		r+=n[j]
		j+=1
	else: 
		r+="+"
print r
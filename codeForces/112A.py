s1 = raw_input()
s2 = raw_input()

s1 = s1.lower()
s2 = s2.lower()

r = 0

for i in range(len(s1)):
	if(s1[i]<s2[i]):
		r=-1
		break
	elif(s1[i]>s2[i]):
		r=1
		break

print r
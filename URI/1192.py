n = int (raw_input())
for i in range(n):
	x = raw_input()
	if x[0]==x[2]:
		print int(x[0])*int(x[2])
	elif x[1]>="A" and x[1]<="Z":
		print int(x[2])-int(x[0])
	else:
		print int(x[0])+int(x[2])
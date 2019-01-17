n = int(raw_input())

nome = [[0 for i in range(2)] for i in range(n)]
usado = []
ant,nov = raw_input().split()
ind=0
add=0

if ant!=nov:
	nome[0][0] = ant
	nome[0][1] = nov
	usado.append(ant)
	usado.append(nov)
	ind=1
	add=1
for i in range(ind,n):
	ant,nov = raw_input().split()
	if not(nov in usado) and ant in usado:
		for j in range(len(nome)):
			if(nome[j][1]==ant):
				nome[j][1]=nov;
				usado.append(nov)
	elif not ant in usado and not nov in usado:
		nome[add][0]=ant
		nome[add][1]=nov
		add+=1
		usado.append(ant)
		usado.append(nov)
print add
for i in range(add):
	print nome[i][0],nome[i][1]
nc = int (raw_input())
for i in range(1,nc+1):
	n,k = map(int,raw_input().split())
	v = range(1,n+1)
	j = k-1
	while len(v)>1:
		if j>=len(v):
			j = j-len(v)*(j/len(v))
		v.pop(j)
		j+=k-1
	print "Case %i: %i" %(i,v[0])
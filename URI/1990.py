v=[]
while True:
	n = int(raw_input())
	if(n==-1): break
	v = map(int,raw_input().split())
	soma = 0
	resp=0
	v.sort()
	for i in v:
		soma+=i
	
	teste1=((n-1)/2)-1
	teste2=(n-1)/2
	#add frente
	x=(v[teste1]*n)-soma
	if(x<v[teste1] and not x in v):
		resp+=1

	#add meio
	x=soma/(n-1.0)
	if(int(x)-x==0.0 and not x in v and x>v[teste1] and x<v[teste2]):
		resp+=1
		x=soma/(n-1)

	#add tras
	x=(v[teste2]*n)-soma
	if(x>v[teste2] and not x in v):
		resp+=1

	print resp
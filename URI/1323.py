while True:
	n=int(raw_input())
	if n==0:
		break
	cont=0;
	for i in range(1,n+1):
		cont+=i**2
	print cont
while True:
	try:
		nVetor = []
		n,m = map(int, raw_input().split())
		nVetor = map(int,raw_input().split())
		nVetor.sort(reverse = True)
		soma = 0
		for i in range(0,m):
			soma+=nVetor[i]
		print soma
	except EOFError:
		break
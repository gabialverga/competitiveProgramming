soma=0.0
cont=0.0
try:
	while(True):
		nome=raw_input()
		val=float(raw_input())
		soma+=val
		cont+=1.0

except EOFError:
	print "%.1f" %(soma/cont)
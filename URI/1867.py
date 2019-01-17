while True:
	n1,n2 = map(int,raw_input().split())
	if n1==0 and n2==0:
		break
	if n1>9:
		n1%=9
		if n1==0:
			n1 = 9

	if n2>9:
		n2%=9
		if n2==0:
			n2 = 9

	if n1>n2:
		print "1"
	elif n2>n1:
		print "2"
	else:
		print "0"
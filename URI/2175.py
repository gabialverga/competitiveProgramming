o,b,i = map(float,raw_input().split())
if o==i or o==b or b==i:
	print "Empate"
elif o<b and o<i:
	print "Otavio"
elif b<o and b<i:
	print "Bruno"
elif i<o and i<b:
	print "Ian"

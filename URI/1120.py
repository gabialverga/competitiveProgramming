while(True):
	s1,s2 = raw_input().split()
	if s1=="0" and s2=="0": break
	s2 = s2.replace(s1,"")
	if(s2!=""):
		print int(s2)
	else:
		print 0

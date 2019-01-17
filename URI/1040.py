n1,n2,n3,n4 = map(float,raw_input().split())
media = (n1*2+n2*3+n3*4+n4)/10.0
print "Media: %.1f" %(media)
if media >= 7.0:
	print "Aluno aprovado."
elif media<5.0:
	print "Aluno reprovado."
else:
	print "Aluno em exame."
	nExame = float(raw_input())
	print "Nota do exame: %.1f" %(nExame)
	nMedia = (media+nExame)/2.0
	if nMedia >=5.0:
		print "Aluno aprovado."
	else:
		print "Aluno reprovado."
	print "Media final: %.1f" %(nMedia)
while True:
	try:
		n1,n2 = map(int,raw_input().split())
		str1 = str(bin(n1))
		str2 = str(bin(n2))
		tam = max(len(str1),len(str2))
		strc = "%"+str(tam)+"s"
		str1 = strc %(str1)
		str2 = strc %(str2)
		strResp = ""
		for i in range(1,tam):
			#tam-i+1 -> indice
			if str1[tam-i] == "1" and str2[tam-i] == "1":
				strResp += "0"
			elif str1[tam-i] != "1" and str2[tam-i] == "1":
				strResp += "1"
			elif str1[tam-i] == "1" and str2[tam-i] != "1":
				strResp += "1"
			else:
				strResp += "0"

		strResp = "0b"+strResp[::-1]
		resp = int(strResp,2)
		print resp
	except EOFError:
		break
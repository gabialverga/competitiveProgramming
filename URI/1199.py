while True:
    n = raw_input()
    if(n[0]=='-'): break
    if(len(n)>2 and n[1]=='x'): print int(n,16)
    else: print "0x"+str(hex(int(n))).split('0x')[1].upper()
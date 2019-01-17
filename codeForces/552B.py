n = raw_input()
tam = len(n)
cont = 0
n = int(n)
nove = 9
for i in xrange(1,tam):
    cont+=nove*i
    n-=nove
    nove*=10
print cont+n*tam
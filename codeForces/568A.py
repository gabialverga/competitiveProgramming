from math import sqrt

eh_primo = [True]*(1179860)

eh_primo[0] = False
eh_primo[1] = False

eh_pralindromo = [True]*(1179860)
eh_pralindromo[0] = False
eh_pralindromo[1] = True
for i in xrange(2,1179860):
    if eh_primo[i]:
        for j in xrange(2*i,1179860,i):
            eh_primo[j] = False
    if str(i)!=(str(i)[::-1]):
        eh_pralindromo[i] = False
a,b = map(float, raw_input().split())
pm=1
pl=2
i=3
aux = 1
while(i<1179860):
    if(eh_primo[i]):
        pm+=1
    if(eh_pralindromo[i]):
        pl+=1
    if(pm<=a*pl/b): aux = i
    i+=1
print aux
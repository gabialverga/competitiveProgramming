def power(number, pow):
    if (pow == 0): return 1
    if (pow%2 == 0): return power((number*number),(pow/2))
    else: return (number)*(power(number,pow-1))

n = int(raw_input())
resp=0
for i in xrange(1,n+1):
    resp+=power(2, i)
print resp
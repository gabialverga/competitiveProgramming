def gcd(a,b):
    if a == 0: return b
    if b == 0: return a
    return gcd(b, a%b)

def mmc(a,b):
    return (a/gcd(a,b))*b
    
n,a,b,p,q = map(int,raw_input().split())

print ((n/a)*p) + ((n/b)*q) - (n/mmc(a,b))*min(p,q)
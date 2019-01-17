fat = [0]*61
fat[0]=1
for i in xrange(1,61):
    fat[i] = fat[i-1]*i

n,m,t = map(int,raw_input().split())

resposta = fat[m+n]/(fat[t]*fat[m+n-t])
if n>=t:
    resposta-=fat[n]/(fat[t]*fat[n-t])
if m>=t:
    resposta-=fat[m]/(fat[t]*fat[m-t])
if m+3>=t:
    resposta-=fat[n]/(fat[3]*fat[n-3])*fat[m]/(fat[t-3]*fat[m-t+3])
if m+2>=t:
    resposta-=fat[n]/(fat[2]*fat[n-2])*fat[m]/(fat[t-2]*fat[m-t+2])
if m+1>=t:
    resposta-=fat[n]/(fat[1]*fat[n-1])*fat[m]/(fat[t-1]*fat[m-t+1])
print resposta
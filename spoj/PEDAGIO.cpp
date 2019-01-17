#include <iostream>
#include <deque>
#include <string.h>
#define nv 101

using namespace std;

typedef struct{
	long int m[nv][nv];
	int d[nv];
	int p[nv];
	int s[nv];
	int v,a;
}grafo;

void bfs(grafo *g,int inicio){
	int x;
	deque<int> fila;
	fila.push_front(inicio);
	g->d[inicio]=1;
	while(fila.size()>0){
		x=fila.back();
		fila.pop_back();
		for(int i=1;i<=g->v;i++){
			if(g->m[x][i]){
				if(!g->d[i]){
					g->d[i]=1;
					fila.push_front(i);
					g->s[i]=g->s[x]+1;
				}else{
					if(g->s[i]>g->s[x]+1)
						g->s[i]=g->s[x]+1;
				}
			}
		}
		g->p[x]=1;
	}
}

int main(){
	int c,e,l,p,cont=1,x,y;
	grafo g;
	while(true){
		memset(g.m,0,nv*nv*sizeof(int));
		memset(g.p,0,nv*sizeof(int));
		memset(g.d,0,nv*sizeof(int));
		memset(g.s,0,nv*sizeof(int));
		cin>>c>>e>>l>>p;
		g.v=c;
		g.a=e;
		if(!c &&!e && !l && !p) break;
		for(int i=1;i<=e;i++){
			cin>>x>>y;
			g.m[x][y]=1;
			g.m[y][x]=1;
		}
		bfs(&g,l);
		cout<<"Teste "<<cont++<<endl;
		for(int i=1;i<=(c-1);i++){
			if(g.s[i]<= p && i!=l && g.s[i]>0)
				cout<<i<<" ";
		}
		if(g.s[c] <= p && g.s[c]>0) cout << c;
		cout<<endl<<endl;
	}
	return 0;
}

#include <iostream>
#include <deque>
#include <string.h>
#define nv 101

using namespace std;

typedef struct{
	int m[nv][nv];
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
	int e,l,x,y,cont=1;
	grafo g;
	while(true){
		cin>>e>>l;
		memset(g.m,0,nv*nv*sizeof(int));
		memset(g.p,0,nv*sizeof(int));
		memset(g.d,0,nv*sizeof(int));
		memset(g.s,0,nv*sizeof(int));
		if(e==0 && l==0) break;
		g.v=e;
		g.a=l;
		for(int i=0;i<l;i++){
			cin>>x>>y;
			g.m[x][y]=1;
			g.m[y][x]=1;
		}
		bool ok=true;
		bfs(&g,1);
		for(int j=1;j<=e;j++)
			if(!g.d[j])
				ok=false;
		if(ok)
			cout<<"Teste "<<cont<<endl<<"normal"<<endl<<endl;
		else 
			cout<<"Teste "<<cont<<endl<<"falha"<<endl<<endl;
		cont ++;
	}
	return 0;
}
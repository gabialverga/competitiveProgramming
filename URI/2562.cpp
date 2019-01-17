#include <iostream>
#include <vector>
#include <string.h>
#include <stdio.h>

using namespace std;

bool vis[1010];
vector<int> adj[1010],limpa;

void dfs(int no){
	vis[no]=true;
	for(int i=0;i<adj[no].size();i++){
		if(!vis[adj[no][i]]){
			dfs(adj[no][i]);
		}
	}
}

int main(){
	int n,m,a,b,s,cont;
	while(cin>>n>>m){
		for(int i=0;i<m;i++){
			scanf("%i %i",&a, &b);
			limpa.push_back(a);
			adj[a].push_back(b);
		}
		scanf("%i",&s);
		dfs(s);
		cont=0;
		for(int i=1;i<=n;i++){
			if(vis[i]){
				cont++;
			}
		}
		n+=2;
		memset(vis,false,n*sizeof(bool));
		for(int i=0;i<limpa.size();i++){
			adj[limpa[i]].clear();
		}
		limpa.clear();
		printf("%d\n",cont);	
	}
	return 0;
}
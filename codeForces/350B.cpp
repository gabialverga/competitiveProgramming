#include <iostream>
#include <queue> 
#include <cstring>
#include <stdio.h>

using namespace std;

bool viss[100010],obj[100010];
int cont[100010];
vector<int> visinhos[100010],caminho;

int bfs(int n,int tam){
	vector<int> aux;
	queue<int> q;
	memset(viss,false,tam*sizeof(bool));
	q.push(n);
	viss[n]=true;
	aux.push_back(n);
	while(!q.empty()){
		int x = q.front();
		q.pop();
		if(cont[x]<2){
			for(int i=0;i<visinhos[x].size();i++){
				if(!viss[visinhos[x][i]] && !obj[visinhos[x][i]] && cont[visinhos[x][i]]<2){
					aux.push_back(visinhos[x][i]);
					viss[visinhos[x][i]]=true;
					q.push(visinhos[x][i]);
				}
			}	
		}
	}
	if(aux.size()>caminho.size()){
		caminho = aux;
	}
	return tam;
}

int main(){
	int n,hoteis[100010],j=0,x;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&obj[i]);
		if(obj[i]){
			hoteis[j]=i;
			j++;
		}
	}
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		cont[x]++;
		if(x!=0){
			visinhos[i].push_back(x);
		}
	}
	for(int i=0;i<j;i++){
		bfs(hoteis[i],n);
	}
	printf("%d\n",caminho.size());
	for(int i=caminho.size()-1;i>0;i--){
		printf("%d ",caminho[i]);
	}
	printf("%d\n",caminho[0]);
	return 0;
}
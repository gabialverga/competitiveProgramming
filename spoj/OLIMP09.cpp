#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;
typedef struct{
	int id,ouro,prata,bronze;
}pais;

pais medalhas[1001];

bool compare(pais a,pais b){
	if(a.ouro>b.ouro){
		return true;
	}else if(a.ouro<b.ouro){
		return false;
	}else if(a.prata>b.prata){
		return true;
	}else if(a.prata<b.prata){
		return false;
	}else if(a.bronze>b.bronze){
		return true;
	}else if(a.bronze<b.bronze){
		return false;
	}else if(a.id<b.id){
		return true;
	}else{
		return false;
	}
}

int main(){
	int n,m;
	cin>>m>>n;
	int o,p,b;
	for(int i=0;i<m;i++){
		medalhas[i].id=i;
	}
	for(int i=0;i<n;i++){
		cin>>o>>p>>b;
		medalhas[o-1].ouro++;
		medalhas[p-1].prata++;
		medalhas[b-1].bronze++;
	}
	sort(medalhas,m+medalhas,compare);
	for(int i=0;i<m;i++){
		cout<<medalhas[i].id+1<<" ";
	}
	return 0;	
}
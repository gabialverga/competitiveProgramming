#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>

using namespace std;

int pares[110];

int main(){
	int n,m,x,cont=0,v[110];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		pares[x]++;
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>v[i];
	}
	sort(v,v+m);
	for(int i=0;i<m;i++){
		if(v[i]>0 && pares[v[i]-1]>=1){
			pares[v[i]-1]--;
			cont++;
		}else if(pares[v[i]]>=1){
			pares[v[i]]--;
			cont++;
		}else if(pares[v[i]+1]>=1){
			pares[v[i]+1]--;
			cont++;
		}
	}
	cout<<cont<<endl;
	return 0;
}
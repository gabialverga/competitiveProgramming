#include <iostream>

#define NMAX 1010

using namespace std;

int parents[NMAX];

int find(int a){
	if(a==parents[a]) return a;
	return parents[a] = find(parents[a]);
}

void join(int a,int b){
	int pA = find(a);
	int pB = find(b);
	if(pA==pB) return;
	parents[pB]=pA;
}

int main(){
	for(int i=1;i<=NMAX;i++){
		parents[i]=i;
	}
	int n,m,x,y;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		join(x,y);
	}
	int cont=0;
	for(int i=1;i<=n;i++){
		if(parents[i]==i) cont++;
	}
	cout<<cont<<endl;
	return 0;
}
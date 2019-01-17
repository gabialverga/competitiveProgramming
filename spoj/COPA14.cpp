#include <iostream>
#include <vector>
#include <algorithm>

#define NMAX 110

using namespace std;

vector< pair< int, pair<int,int> > > rotas,rotas2;
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
	for(int i=0;i<=NMAX;i++){
		parents[i]=i;
	}
	int n,f,r;
	cin>>n>>f>>r;
	int a,b,peso,res=0;
	for(int i=0;i<f;i++){
		cin>>a>>b>>peso;
		rotas.push_back(make_pair(peso,make_pair(a,b)));
	}
	sort(rotas.begin(),rotas.end());
	for(int i=0;i<rotas.size();i++){
		if(find(rotas[i].second.first)!=find(rotas[i].second.second)){
			join(rotas[i].second.first,rotas[i].second.second);
			   	res+=rotas[i].first;
		}		
	}
	for(int i=0;i<r;i++){
		cin>>a>>b>>peso;
		rotas2.push_back(make_pair(peso,make_pair(a,b)));
	}
	sort(rotas2.begin(),rotas2.end());
	for(int i=0;i<rotas2.size();i++){
		if(find(rotas2[i].second.first)!=find(rotas2[i].second.second)){
			join(rotas2[i].second.first,rotas2[i].second.second);
			   	res+=rotas2[i].first;
		}		
	}
	cout<<res<<endl;
	return 0;
}
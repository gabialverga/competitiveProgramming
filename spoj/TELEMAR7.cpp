#include<iostream>

using namespace std;
int v[1001][1001];
int main(){
	int n,l,t,ok=0;
	cin>>n>>l;
	while(ok<l){
		cin>>t;
		int aux=v[0][0],id=0;
		for(int i=0;i<n;i++){
			if(v[0][i]<aux){
				aux=v[0][i];
				id=i;
			}
		}
		v[0][id]+=t;
		v[1][id]++;
		ok++;
	}
	for(int i=0;i<n;i++){
			cout<<i+1<<" "<<v[1][i]<<endl;
		}
	return 0;
}
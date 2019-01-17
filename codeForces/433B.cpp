#include <bits/stdc++.h>

using namespace std;

long long soma1[100100];
long long soma2[100100];

int main(){
	long long n,v[100100],m,v1,v2,op;
	cin>>n;
	cin>>v[0];
	soma1[0] = v[0];
	for(int i=1;i<n;i++){
		cin>>v[i];
		soma1[i] = soma1[i-1]+v[i];
	}
	sort(v,v+n);
	soma2[0]=v[0];
	for(int i=1;i<=n;i++){
		soma2[i] = soma2[i-1]+v[i];
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>op>>v1>>v2;
		if(op==1){
			cout<<soma1[v2-1]-soma1[v1-2]<<endl;
		}else{
			cout<<soma2[v2-1]-soma2[v1-2]<<endl;
		}
	}	
	return 0;
}
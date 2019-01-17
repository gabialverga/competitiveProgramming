#include <iostream>

using namespace std;

int main(){
	int n,v[100010],v2[100010],v3[100010];
	cin>>n;
	cin>>v[0];
	v2[0]=v[0];
	for(int i=1;i<n;i++){
		cin>>v[i];
		v2[i]=v[i]+v2[i-1];
	}
	v3[n-1]=v[n-1];
	for(int i=n-2;i>=0;i--){
		v3[i]=v[i]+v3[i+1];
	}
	int resp=0;
	for(int i=0;i<n-1;i++){
		if(v2[i]==v3[i+1]) resp++;	
	}
	cout<<resp<<endl;
	return 0;
}
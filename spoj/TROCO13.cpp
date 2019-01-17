#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int n,l,x,v;
	cin>>l>>n;
	int m[100001];
	memset(m,0,100001*sizeof(int));
	m[0]=1;
	for(int i=0;i<n;i++){
		cin>>x;
		for(int t=l;t>=x;t--){
			if(m[t-x]){
				m[t]=1;
			}
			if(m[l]){
				cout<<"S";
				return 0;
			}
		}
	}
	cout<<"N";
	return 0;
}
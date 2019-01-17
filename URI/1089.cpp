#include <iostream>

using namespace std;

bool v[10010];
int main(){
	int n,n1,n2,n0;
	while(cin>>n){
		char sec;
		int c=0;
		if(n==0) return 0;
		cin>>n1;
		n0=n1;
		for(int i=1;i<n;i++){
			cin>>n2;
			if(n1>n2){
				v[i-1]=false;
			}else{
				v[i-1]=true;
			}
			n1=n2;
		}
		if(n2>n0){
			v[n-1]=false;
		}else{
			v[n-1]=true;
		}
		for(int i=1;i<n;i++){
			if(v[i-1]!=v[i]){
				c++;
			}
			 
		}
		if(v[n-1]!=v[0]) c++;
		cout<<c<<endl;
	}
	return 0;
}
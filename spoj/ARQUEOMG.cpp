#include <iostream>

using namespace std;

int main(){
	int n,a,b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		if(a>=0 && b>=0){
			if(a>=b) cout<<a-b<<endl;
			else cout<<b-a<<endl;
		}else if(a<0 && b<0){
			if(a>b) cout<<a-b<<endl;
			else cout<<b-a<<endl;
		}else if(a>0 && b<0) cout<<a-b-1<<endl;
		else if(b>0 && a<0) cout<<b-a-1<<endl;
		
	}
	return 0;
}
#include <iostream>

using namespace std;

int main(){
	int n,t,l,c,a=0,b=0;
	cin>>n>>t>>l;
	for(int i=0;i<n-1;i++){
		cin>>c;
		int x = t-c;
		if(x<0) x*=-1;
		if(i%2==0 && x<=l){ //alice
			a+=x;
			t=c;
		}else if(x<=l){
			b+=x;
			t=c;
		}
	}
	cout<<a<<" "<<b<<endl;
	return 0;
}
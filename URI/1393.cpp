#include <iostream>

using namespace std;

int main(){
	int n,v[41];
	v[0]=1;
	v[1]=2;
	for(int i=2;i<40;i++){
		v[i]=v[i-1]+v[i-2];
	}
	while(true){
		cin>>n;
		if(n==0) break;
		cout<<v[n-1]<<endl;
	}
	return 0;
}
#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int n,a,b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		cout<<(a*b)/2<<" cm2"<<endl;
	}
	
	return 0;
}
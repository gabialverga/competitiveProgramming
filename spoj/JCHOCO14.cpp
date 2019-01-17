#include <iostream>

using namespace std;

int main(){
	int n,c=1;
	cin>>n;
	while(n>=2){
		n/=2;
		c*=4;
	}
	cout<<c;
	return 0;
}
#include <iostream>

using namespace std;

int main(){
	long int n,x,s=0,s2=0;
	cin>>n;
	for(long int i=0;i<n-1;i++){
		cin>>x;
		s+=i+1;
		s2+=x;
	}
	cout<<(s+n)-s2;
	return 0;
}


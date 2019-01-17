#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	if(n==1){
		cout<<m/2;
	}else if(m==1){
		cout<<n/2;
	}else if(m%2==0 || n%2==0){
		cout<<m*n/2;
	}else{
		cout<<((m-1)*n/2)+n/2;
	}
	return 0;
}
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

unsigned long long int fat(int n){
	unsigned long long int r=1;
	for(unsigned long long int i=1;i<=n;i++){
		r*=i;
	}
	return r;
}

int main(){
	unsigned long int a,b;
	while(cin>>a>>b){
		cout<<fat(a)+fat(b)<<endl;	
	}
	return 0;
}
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;


int main(){
	int n,a,b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		while(a!=b){
			if(a>b)
		  	  a=a-b;
			else
		  	  b=b-a;
		}
		cout<<(a*b)/a<<endl;
	}
	return 0;
}
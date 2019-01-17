#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int n;
	float x1,x2,x3;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x1>>x2>>x3;
		printf("%.1f\n",(2.0*x1+3.0*x2+5.0*x3)/10.0);
	}
	
	return 0;
}
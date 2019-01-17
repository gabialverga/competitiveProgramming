#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	double n1,n2,n3;
	cin>>n1>>n2>>n3;
	n1=((n1*2)+(n2*3)+(n3*5))/10;
	printf("MEDIA = %.1f\n",n1);
	return 0;
}
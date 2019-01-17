#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	double n1,n2;
	cin>>n1>>n2;
	n1=((n1*3.5)+(n2*7.5))/11;
	printf("MEDIA = %.5f\n",n1);
	return 0;
}
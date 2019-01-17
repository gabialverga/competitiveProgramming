#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	double r;
	cin>>r;
	r=(4.0/3)*((r*r)*r)*3.14159;
	printf("VOLUME = %.3f\n",r);
	return 0;
}
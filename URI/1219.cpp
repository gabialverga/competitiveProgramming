#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){
	double a,b,c;
	while(cin>>a>>b>>c){
		double at,ac,aC,p,r;
		p=(a+b+c)/2.0;
		at=sqrt(p*(p-a)*(p-b)*(p-c));
		ac=pow(at/p,2)*M_PI;
		aC=(a*b*c)/(4*at);
		aC = M_PI*aC*aC;
		printf("%.4f ",aC-at);
		printf("%.4f ",at-ac);
		printf("%.4f\n",ac);	
	}
	return 0;
}

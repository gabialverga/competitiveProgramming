#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
int c1,n1,c2,n2;
float p1,p2;
cin>>c1>>n1>>p1>>c2>>n2>>p2;
float res;
res=((n1*p1)+(n2*p2));
printf("VALOR A PAGAR: R$ %.2f\n",res);
return 0;
}
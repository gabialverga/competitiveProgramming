#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
string nome;
double n1,n2;
cin>>nome>>n1>>n2;
n1+=(n2*15)/100;
printf("TOTAL = R$ %.2f\n",n1);
return 0;
}
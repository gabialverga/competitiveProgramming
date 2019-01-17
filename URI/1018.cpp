#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
int valor,n100,n50,n20,n10,n5,n2,r100,r50,r20,r10,r5,r2;
cin>>valor;
n100=valor/100;
r100=valor%100;
n50=r100/50;
r50=r100%50;
n20=r50/20;
r20=r50%20;
n10=r20/10;
r10=r20%10;
n5=r10/5;
r5=r10%5;
n2=r5/2;
r2=r5%2;
cout<<valor<<endl;
cout<<n100<<" nota(s) de R$ 100,00\n";
cout<<n50<<" nota(s) de R$ 50,00\n";
cout<<n20<<" nota(s) de R$ 20,00\n";
cout<<n10<<" nota(s) de R$ 10,00\n";
cout<<n5<<" nota(s) de R$ 5,00\n";
cout<<n2<<" nota(s) de R$ 2,00\n";
cout<<r2<<" nota(s) de R$ 1,00\n";
return 0;
}
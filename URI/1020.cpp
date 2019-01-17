#include <iostream>

using namespace std;

int main(){
int n,d,m,a;
cin>>n;
a=n/365;
m=(n%365)/30;
d=n-(a*365)-(m*30);
cout<<a<<" ano(s)\n";
cout<<m<<" mes(es)\n";
cout<<d<<" dia(s)\n";
return 0;
}
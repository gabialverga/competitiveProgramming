#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
int x1,x2,y1,y2;
float res;
cin>>x1>>y1>>x2>>y2;
res=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
printf("%.4f\n",res);
return 0;
}
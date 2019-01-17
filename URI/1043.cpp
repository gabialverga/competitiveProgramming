#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(){
	float v[3],max=0;
	for(int i=0;i<3;i++){
		cin>>v[i];
		if(v[i]>max) max = v[i];
	}
	if(max<v[0]+v[1]+v[2]-max){
		printf("Perimetro = %.1f\n",(v[0]+v[1]+v[2]));
	}else{
		printf("Area = %.1f\n",(v[0]+v[1])*v[2]/2.0);
	}
	return 0;
}
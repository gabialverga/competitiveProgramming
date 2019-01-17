#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	float x,soma=0.0,cont=0;
	for(int i=0;i<6;i++){
		cin>>x;
		if(x>0){
			soma+=x;
			cont++;
		}
	}
	if(cont==0){
		cout<<"0 valores positivos"<<endl;
		cout<<"0"<<endl;
	}else{
		cout<<cont<<" valores positivos"<<endl;
		printf("%.1f\n",soma/cont);
	}
	return 0;
}
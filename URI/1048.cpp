#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	float sal,novo,percent;
	cin>>sal;
	if(sal<=400.00){
		percent=15;
	}else if(sal<=800.00){
		percent=12;
	}else if(sal<=1200.00){
		percent=10;
	}else if(sal<=2000.0){
		percent=7;
	}else{
		percent=4;
	}
	printf("Novo salario: %.2f\n",sal+((sal*percent)/100.0));
	printf("Reajuste ganho: %.2f\n",((sal*percent)/100.0));
	printf("Em percentual: %.0f %\n",percent);
	return 0;
}
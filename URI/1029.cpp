#include <stdio.h>

int cont = 0;

int fib(n){
	cont++;
	if(n == 1) return 1;
	else if(n == 0) return 0;
	else return fib(n - 1) + fib(n - 2);
}

int main(){
	int quant,cot;
	scanf("%d",&quant);
	for(cot = 0;cot < quant;cot++){
		int ver,resul;
		cont = 0;
		scanf("%d",&ver);
		resul = fib(ver);
		printf("fib(%d) = %d calls = %d\n",ver,cont - 1,resul);
	}
	return 0;
}

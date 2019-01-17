#include <iostream>
using namespace std;
int main(){
	int n, aux, insatisfacao = 0, s = 0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &aux);
		insatisfacao += aux;
		if(aux==0) s++;
	}
	if(insatisfacao>=s){printf("N\n"); return 0;}
	printf("Y\n");	
	return 0;
}
#include <stdio.h>
#include <string.h>



void p3(char *vet){
	int tam = strlen(vet)/2;	
	for(;vet[tam] != '\0';tam++){
		vet[tam] -= 1;
	}
}

void p2(char *vet){
	int cont,tam = strlen(vet);	
	for(cont = 0;cont < tam/2;cont++){
		char aux;
		aux = vet[cont];
		vet[cont] = vet[tam-cont-1];
		vet[tam-cont-1] = aux;	
	}
}

void p1(char *vet){
	int cont;
	for(cont = 0;vet[cont] != '\0';cont++){
		if ((('A' <= vet[cont]) && ('Z' >= vet[cont])) || (('a' <= vet[cont])&&('z' >= vet[cont]))){
			vet[cont] += 3;
		}
	}
}

int main(){
	int vezes,cont;	
	scanf("%d",&vezes);
	getchar();
	for(cont = 0;cont < vezes;cont++){
		char vet[1000];
		gets(vet);
		p1(vet);
		p2(vet);
		p3(vet);
		printf("%s\n",vet);
	}
}
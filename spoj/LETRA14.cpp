#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(){
	char nome[1500];
	char x;
	float s=0,cont=0, p;
	bool j= false;
	scanf("%c\n", &x); 
	fgets(nome, 1500, stdin);
      	for(int i=0;nome[i] != '\0';i++){
        	if(nome[i]==' '){
            		s++;
        		j =false;
		}
		if((nome[i]==x)&&(j==false)){
            		cont++;
        		j = true;
		}
       
	}
    p=(cont/(s+1))*100.0;
    printf("%3.1f",p);
	return 0;
}






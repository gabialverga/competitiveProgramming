#include <iostream>
#include <stdio.h>
#include <stdlib.h> 

using namespace std;

int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}

int main(){
	unsigned long int n,v[100001],r,cont=0;
	scanf("%d",&n);
	for(unsigned long int i=0;i<n;i++)
		scanf("%d",&v[i]);
	qsort(v,n,sizeof(unsigned long int),compare);
	for(unsigned long int i=0;i<n;i++){
		if(v[i]!=v[i+1]) cont++;
	}	
	cout<<cont;
	return 0;
}


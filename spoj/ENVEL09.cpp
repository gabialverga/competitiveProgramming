#include <iostream>
#include <stdio.h>
#include <stdlib.h> 

using namespace std;

int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}

int main(){
	int m,n,v[1001],x;
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){
		v[i]=0;
	}
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		v[x-1]++;
	}
	qsort(v,m,sizeof(int),compare);
	printf("%d",v[0]);
	return 0;
}

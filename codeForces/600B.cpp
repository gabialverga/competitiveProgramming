#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int v[200010];

int bb(int num,int tam){
	int ini = 0;
	int fim = tam-1;
	int media;
	int pos = tam;
	while(ini<=fim){
		media = (ini+fim)/2;
		if(v[media]>num) pos = media;
		if(v[media]<=num) ini = media+1;
		else fim = media-1;
	}
	return pos;
}

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
	sort(v,v+n);
	int num;
	for(int i=0;i<m-1;i++){
		scanf("%d",&num);
		printf("%d ",bb(num,n));
	}
	scanf("%d",&num);
	printf("%d\n",bb(num,n));
	return 0;
}
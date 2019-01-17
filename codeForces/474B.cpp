#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int v[200010];
int bb(int num,int tam){
	int ini = 1;
	int fim = tam;
	int media;
	int pos = tam;
	while(ini<=fim){
		media = (ini+fim)/2;
		if(v[media]>=num) pos = media;
		if(v[media]<num) ini = media+1;
		else fim = media-1;
	}
	return pos;
}
int main(){
	int n,m,num;
	scanf("%d",&n);
	scanf("%d",&num);
	v[1] = num;
	for(int i=2;i<=n;i++){
		scanf("%d",&num);
		v[i]=v[i-1]+num;
	}
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&num);
		printf("%d\n",bb(num,n));
	}
	return 0;
}
#include <iostream>
#include <stdio.h>
#include <stdlib.h> 

using namespace std;

int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}

int main(){
	int n,v[1001];
	scanf("%d",&n);
	for(int i=0;i<101;i++){
		v[i]=0;
	}
	for(int i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		v[x]++;
	}
	int ma=0,ind;
	for(int i=0;i<101;i++){
		if(v[i]>=ma){
			ma=v[i];
			ind=i;
		}
	}
	cout<<ind;
	return 0;
}

#include <iostream>
#include <stdio.h>

using namespace std;

int main (){
	int n,m[1001][1001],l[1001],c[1001],d1=0,d2=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		l[i]=0;
		c[i]=0;
		for(int j=0;j<n;j++){
			scanf("%d",&m[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			l[i]+=m[i][j];
			c[i]+=m[j][i];
			if(i+j==n-1) d2+=m[i][j];
		}
		d1+=m[i][i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(l[i]!=c[j] || l[i]!=d1 || l[i]!=d2){
				printf("0");
				return 0;
			}
		}
	}
	printf("%d", d1);
	  return 0;
}




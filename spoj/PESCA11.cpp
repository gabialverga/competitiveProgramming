#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int n,x,y,x1,y1,m[101][101];
	cin>>n;
	memset(m,0,101*101*sizeof(int));
	for(int i=0;i<n;i++){
		cin>>x>>x1>>y>>y1;
		for(int j=x;j<x1;j++){
			for(int k=y;k<y1;k++){
				m[j][k]=1;
			}
		}
	}
	int cont=0;
	for(int j=0;j<101;j++){
		for(int k=0;k<101;k++){
			cont+=m[j][k];
		}
	}
	cout<<cont;
	return 0;
}


#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int v[2001];

int main(){
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		v[x]++;
	}
	for(int i=1;i<2001;i++){
		if(v[i]!=0){
			printf("%i aparece %i vez(es)\n",i,v[i]);
		}
	}
	return 0;
}
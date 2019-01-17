#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(){
	int n,m,j,x;
	while(true){
		cin>>n;
		if(n==0) return 0;
		m=0;
		j=0;
		for(int i=0;i<n;i++){
			cin>>x;
			if(x==0) m++;
			else j++;
		}
		printf("Mary won %i times and John won %i times\n",m,j);
	}
	return 0;
}
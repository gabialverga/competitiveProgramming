#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int n,k,x[51],cont=0;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	for(int i=0;i<n;i++){
		if(x[i]>=x[k-1] && x[i]>0){
			cont++;
		}
	}
	cout<<cont;
	return 0;
}
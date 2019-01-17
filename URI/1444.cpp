#include <iostream>

using namespace std;

int main(){
	int n,soma,cont,div3,div2,ret2;
	while(cin>>n){
		if(n==0) break;
		cont=0;
		while(n>1){
			div3=n/3;
			div2=(n%3)/2;        
			ret2=(n%3)%2;          
			soma=div3+div2+ret2;
			cont+=soma;
			n=soma;	
		}
		cout<<cont<<endl;
	}
	return 0;
}
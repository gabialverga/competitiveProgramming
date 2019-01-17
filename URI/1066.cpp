#include <iostream>

using namespace std;

int main(){
	int n,par=0,imp=0,pos=0,neg=0;
	for(int i=0;i<5;i++){
		cin>>n;
		if(n%2==0) par++;
		else imp++;
		if(n>0) pos++;
		else if(n<0) neg++;
	}
	cout<<par<<" valor(es) par(es)"<<endl;
	cout<<imp<<" valor(es) impar(es)"<<endl;
	cout<<pos<<" valor(es) positivo(s)"<<endl;
	cout<<neg<<" valor(es) negativo(s)"<<endl;
	return 0;
}
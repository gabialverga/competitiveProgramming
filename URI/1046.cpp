#include <iostream>

using namespace std;

int main(){
	int n1,n2;
	cin>>n1>>n2;
	if(n1==n2){
		cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
	}else if(n1>n2){
		cout<<"O JOGO DUROU "<<24-n1+n2<<" HORA(S)"<<endl;
	}else{
		cout<<"O JOGO DUROU "<<n2-n1<<" HORA(S)"<<endl;
	}
	return 0;
}
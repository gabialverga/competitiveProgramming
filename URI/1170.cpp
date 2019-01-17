#include <iostream>

using namespace std;

int main(){
	float n,qnt,dias;
	cin>>n;
	for(int i=0;i<n;i++){
		dias=0;
		cin>>qnt;
		while(qnt>1){
			qnt/=2;
			dias++;
		}
		cout<<dias<<" dias"<<endl;
	}
	return 0;
}
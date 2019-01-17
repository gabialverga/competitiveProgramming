#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int n,t,tiro[55],atingido;
	string pulo;
	cin>>n;
	for(int j=0;j<n;j++){
		atingido=0;
		cin>>t;
		for(int i=0;i<t;i++){
			cin>>tiro[i];
		}
		cin>>pulo;
		for(int i=0;i<t;i++){
			if(tiro[i]>2 && pulo[i]=='J' || tiro[i]<=2 && pulo[i]=='S'){
				atingido++;
			}
		}
		cout<<atingido<<endl;
	}
	return 0;
}
#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int n,k,op;
	cin>>n;
	string s[4];
	s[0]="Rolien";
	s[1]="Naej";
	s[2]="Elehcim";
	s[3]="Odranoel";
	
	for(int i=0;i<n;i++){
		cin>>k;
		for(int j=0;j<k;j++){
			cin>>op;
			cout<<s[op-1]<<endl;
		}
	}
	return 0;
}
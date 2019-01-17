#include <iostream>

using namespace std;

int main(){
	int n,z;
	string x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>z;
		int a = 26-z;
		for(int j=0;j<x.size();j++){
			if((int)x[j]-z<65){
				cout<<(char)((int)x[j]+a);
			}else{
				cout<<(char)((int)x[j]-z);
			}
		}
		cout<<endl;
	}
	return 0;
}
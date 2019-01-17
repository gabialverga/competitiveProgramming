#include <iostream>

using namespace std;

int main(){
	int n,m,c;
	while(true){
		cin>>n>>m>>c;
		if(n==0 && m==0 && c==0){
			break;
		}
		cout<<((n-7)*(m-7)+c)/2<<endl;
	}
	return 0;
}
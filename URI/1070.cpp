#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	if(n%2==0) n++;
	for(int i=0;i<12;i=i+2){
		cout<<n+i<<endl;
	}
	return 0;
}
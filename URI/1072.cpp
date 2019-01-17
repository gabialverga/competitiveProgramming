#include <iostream>

using namespace std;

int main(){
	int n,d=0,f=0,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x>=10 and x<=20) d++;
		else f++;
	}
	cout<<d<<" in"<<endl;
	cout<<f<<" out"<<endl;
	return 0;
}
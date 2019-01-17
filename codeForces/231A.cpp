#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int n,cont=0,a,b,c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		if(a+b+c>=2){
			cont++;
		}
	}
	cout<<cont<<endl;
	return 0;
}
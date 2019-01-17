#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n,c=1,m=0;
	while(true){
		cin>>n;	
		if(n==0) break;
		m=pow(2,n)-1;
		cout<<"Teste "<<c<<endl;
		cout<<m<<endl<<endl;
		c++;
	}
	return 0;
}

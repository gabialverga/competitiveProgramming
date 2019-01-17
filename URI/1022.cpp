#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int mdc(int a,int b){
	if(b==0) return a;
	if(a==0) return b;
	mdc(b,a%b);
}

int mmc(int a,int b){
	return (a*b)/mdc(a,b);
}

int main(){
	int n;
	cin>>n;
	int n1,d1,n2,d2,div;
	char d,c;
	for(int i=0;i<n;i++){
		cin>>n1>>d>>d1>>c>>n2>>d>>d2;
		if(c=='+'){
			div=abs(mdc((n1*d2)+(n2*d1),(d1*d2)));
			cout<<(n1*d2)+(n2*d1)<<"/"<<d1*d2<<" = "<<((n1*d2)+(n2*d1))/div<<"/"<<d1*d2/div<<endl;
		}else if(c=='-'){
			div=abs(mdc((n1*d2)-(n2*d1),(d1*d2)));
			cout<<(n1*d2)-(n2*d1)<<"/"<<d1*d2<<" = "<<((n1*d2)-(n2*d1))/div<<"/"<<d1*d2/div<<endl;
		}else if(c=='*'){
			div=abs(mdc((n1*n2),d1*d2));
			cout<<(n1*n2)<<"/"<<d1*d2<<" = "<<(n1*n2)/div<<"/"<<(d1*d2)/div<<endl;
		}else{
			div=abs(mdc((n1*d2),n2*d1));
			cout<<(n1*d2)<<"/"<<n2*d1<<" = "<<(n1*d2)/div<<"/"<<(n2*d1)/div<<endl;
		}
	}
	return 0;
}
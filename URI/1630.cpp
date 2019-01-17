#include <iostream>

using namespace std;

int mdc(int a,int b){  
 if(b == 0)  
  return a;  
 else  
  return mdc(b,a%b); 
}
 
int main(){
	int a,b;
	while(cin>>a>>b){
		cout<<(2*a+2*b)/mdc(a,b)<<endl;
	}
	return 0;
}
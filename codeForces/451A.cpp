#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	if(min(a,b)%2==1) cout<<"Akshat"<<endl;
	else cout<<"Malvika"<<endl;
	return 0;
}
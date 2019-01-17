#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a,b,c;
	while(true){
		cin>>a;
		if(a==0) return 0;
		cin>>b>>c;
		a=sqrt((a*b*100)/c);
		cout<<(int)a<<endl;
	}
	return 0;
}
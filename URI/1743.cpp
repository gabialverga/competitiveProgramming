#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int a1,a2,a3,a4,a5;
	int b1,b2,b3,b4,b5;
	cin>>a1>>a2>>a3>>a4>>a5;
	cin>>b1>>b2>>b3>>b4>>b5;
	if(a1!=b1 && a2!=b2 && a3!=b3 && a4!=b4 && a5!=b5){
		cout<<"Y"<<endl;
	}else{
		cout<<"N"<<endl;
	}
	return 0;
}
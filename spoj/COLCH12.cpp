#include <iostream>

using namespace std;

int main(){
	int a,b,c,h,l;
	cin>>a>>b>>c>>h>>l;
	if(a<=h && b<=l){
		cout<<"S"<<endl;
	}else if(a<=h && c<=l){
		cout<<"S"<<endl;
	}else if(b<=h && a<=l){
		cout<<"S"<<endl;
	}else if(b<=h && c<=l){
		cout<<"S"<<endl;
	}else if(c<=h && a<=l){
		cout<<"S"<<endl;
	}else if(c<=h && b<=l){
		cout<<"S"<<endl;
	}else{cout<<"N"<<endl;
	}
	return 0;
}

#include <iostream>

using namespace std;

int main(){
	int h,m,s;
	char c;
	while(cin>>h>>c>>m>>c>>s){
		int r=0;
		if(23-h>0){
			r+=(23-h)*3600;
		}
		if(59-m>0){
			r+=(59-m)*60;
		}
		if(60-s>0){
			r+=(60-s);
		}
		cout<<r<<endl;
	}
	return 0;
}

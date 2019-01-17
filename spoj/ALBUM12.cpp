#include <iostream>

using namespace std;

int main(){
	int l,h,x1,x2,y1,y2;
	cin>>l>>h>>x1>>y1>>x2>>y2;
	if(x1+x2<=l && y1<=h && y2<=h){
		cout<<'S'<<endl;
	}else if(x1+y2<=l && y1<=h && x2<=h){
		cout<<'S'<<endl;
	}else if(y1+x2<=l && x1<=h && y2<=h){
		cout<<'S'<<endl;
	}else if(y1+y2<=l && x1<=h && x2<=h){
		cout<<'S'<<endl;
	}else if(x1+x2<=h && y1<=l && y2<=l){
		cout<<'S'<<endl;
	}else if(x1+y2<=h && y1<=l && x2<=l){
		cout<<'S'<<endl;
	}else if(y1+x2<=h && x1<=l && y2<=l){
		cout<<'S'<<endl;
	}else if(y1+y2<=h && x1<=l && x2<=l){
		cout<<'S'<<endl;
	}else{
		cout<<'N'<<endl;
	}
	return 0;
}


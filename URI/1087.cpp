#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int x1,y1,x2,y2;
	while(cin>>x1>>y1>>x2>>y2){
		if(x1==0 && x2==0 && y1==0 && y2==0) return 0;
		if(x1==x2 && y1==y2){
			cout<<"0"<<endl;
		}else if(x1==x2 || y1==y2){
			cout<<"1"<<endl;
		}else if((max(x1,x2)-min(x1,x2))==(max(y1,y2)-min(y1,y2))){
			cout<<"1"<<endl;
		}else{
			cout<<"2"<<endl;
		}
	}
	
	return 0;
}
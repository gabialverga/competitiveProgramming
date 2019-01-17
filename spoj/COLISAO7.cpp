#include <iostream>

using namespace std;

int main(){
	int x1,y1,x2,y2,x3,y3,x4,y4,r;
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	if((x3<x1 && x4<x1)||(x3>x2 && x4>x2)||(y3<y1 && y4<y1)||(y3>y2 && y4>y2)){
		cout<<0;
	}else{
		cout<<1;
	}
	return 0;
}


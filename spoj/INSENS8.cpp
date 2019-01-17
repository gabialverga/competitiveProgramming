#include <iostream>

using namespace std;

int main(){
	int n,t=0,x1, x2, y1, y2, dx, dy;
	cin>>n;
	for (int i = 0; i < n; i++) {
		cin>>x1>>y1>>x2>>y2;
		dx=x2-x1;
		dy=y2-y1;
		t+=(dx*dx)+(dy*dy);
	}
	cout<<t;
	return 0;
}

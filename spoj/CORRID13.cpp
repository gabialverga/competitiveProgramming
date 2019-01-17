#include <iostream>

using namespace std;

int main(){
	float n1,d1,v1,n2,v2,d2;
	cin>>n1>>d1>>v1>>n2>>d2>>v2;
	d1=(d1*1000)/v1;
	d2=(d2*1000)/v2;
	if(d1<d2) cout<<n1;
	else cout<<n2;
	return 0;
}

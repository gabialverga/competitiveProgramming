#include <iostream>
#include <string.h>

using namespace std;

int main() {
	int a1,a2,a3;
	cin>>a1>>a2>>a3;
	cout<<min(2*a2+4*a3,min(2*a1+2*a3,4*a1+2*a2))<<endl;
	return 0;
}
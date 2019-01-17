#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int n,c=0;
	string a,b;
	cin>>n>>a>>b;
	for(int i=0;i<n;i++){
		if(a[i]==b[i]){
			c++;
		}
	}
	cout<<c;
	return 0;
}
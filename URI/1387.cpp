#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int v[2001];

int main(){
	int l,r;
	while(cin>>l>>r){
		if(l==0 && r==0) return 0;
		cout<<l+r<<endl;
	}
	return 0;
}
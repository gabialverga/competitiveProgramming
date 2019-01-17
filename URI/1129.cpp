#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main(){
	int n,a,b,c,d,e;
	while(cin>>n){
		if(n==0) return 0;
		for(int i=0;i<n;i++){
			cin>>a>>b>>c>>d>>e;
			if(a<=127 && b>127 && c>127 && d>127 && e>127) cout<<"A"<<endl;
			else if(b<=127 && a>127 && c>127 && d>127 && e>127) cout<<"B"<<endl;
			else if(c<=127 && a>127 && b>127 && d>127 && e>127) cout<<"C"<<endl;
			else if(d<=127 && a>127 && c>127 && b>127 && e>127) cout<<"D"<<endl;
			else if(e<=127 && a>127 && c>127 && d>127 && b>127) cout<<"E"<<endl;
			else cout<<"*"<<endl;
		}
	}
	
	return 0;
}
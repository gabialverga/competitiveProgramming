#include <iostream>
#include <ctype.h>
#include <string.h>

using namespace std;

bool ok[26];

int main(){
	int n;
	char c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>c;
		c=toupper(c);
		ok[(int)c-65]=true;
	}
	for(int i=0;i<26;i++){
		if(!ok[i]){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}
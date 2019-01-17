#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int n,t;
	string s;
	cin>>n>>t>>s;
	for(int i=0;i<t;i++){
		for(int j=0;j<n;j++){
			if(s[j]=='G' && j>0){
				s[j] = s[j-1];
				s[j-1] = 'G';
				j++; 
			}
		}
	}
	cout<<s<<endl;
	return 0;
}
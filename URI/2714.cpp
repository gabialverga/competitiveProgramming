#include <iostream>
#include <string.h>
#include <math.h>
#include <cctype>

using namespace std;

int main(){
	int n;
	cin>>n;
	string s,resp;
	for(int i=0;i<n;i++){
		cin>>s;
		resp="";
		if(s.size()!=20 || s[0]!='R' || s[1]!='A'){
			cout<<"INVALID DATA"<<endl;
		}else{
			for(int j=2;j<20;j++){
				if(s[j]!='0'){
					for(int k=j;k<20;k++){
						resp+=s[k];
					}
					break;
				}
			}
			cout<<resp<<endl;
		}
	}
	return 0;
}
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string s,s2="";
    cin>>s;
    for(int i=0;i<s.size();i++){
    	if(s[i]!='a' && s[i]!='A' && s[i]!='e' && s[i]!='E' && s[i]!='i' && s[i]!='I' && s[i]!='o' && s[i]!='O' && s[i]!='u' && s[i]!='U' && s[i]!='y' && s[i]!='Y'){
			if((int)s[i]>=65 && (int)s[i]<=90){
				s2+='.';
				s2+=(int)s[i]+32;
			}else{
				s2+='.';
				s2+=s[i];
			}
		}
	}
	cout<<s2<<endl;
    return 0;
}
#include <iostream>
#include <deque>
#include <string.h>

using namespace std;

int main(){
	string s,aux,z;
	while(cin>>s){
		aux="";
		bool ok=false;
		deque<string> resp;
		for(int i=0;i<s.size();i++){
			if(s[i]=='[' && !ok){
				ok=true;
			}else if(s[i]=='['){
				resp.push_front(aux);
				aux="";
			}else if(s[i]!=']' && !ok){
				z=s[i];
				resp.push_back(z);
			}else if(s[i]==']'){
				resp.push_front(aux);
				aux="";
				ok=false;
			}else{
				aux+=s[i];
			}
		}
		if(aux!="")
			resp.push_front(aux);
		for(int i=0;i<resp.size();i++){
			cout<<resp[i];
		}
		cout<<endl;
	}
	return 0;
}
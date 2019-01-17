#include <iostream>
#include <stack>
#include <string.h>

using namespace std;

int main(){
	long long int n,cont;
	string s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		cont=0;
		stack<char> p;
		for(int j=0;j<s.size();j++){
			if(s[j]=='<'){
				p.push(s[j]);
			}else if(s[j]=='>' && !p.empty()){
				p.pop();
				cont++;
			}
		}
		cout<<cont<<endl;
	}
	return 0;
}
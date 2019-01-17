#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	string s1,s2;
	bool ok;
	for(int i=0;i<n;i++){
		cin>>s1>>s2;
		ok=true;
		if(s1.size()>=s2.size()){
			for(int j=s2.size()-1;j>=0;j--){
				if(s1[(s1.size()-s2.size())+j]!=s2[j]){
					ok=false;
					break;
				}
			}
			if(ok) cout<<"encaixa"<<endl;
			else cout<<"nao encaixa"<<endl;
		}
		else 
			cout<<"nao encaixa"<<endl;
	}
	return 0;
}
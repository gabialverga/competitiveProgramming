#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int n;
	string s,resp;
	while(cin>>n){
		if(n==0) break;
		cin>>s;
		resp="N";
		for(int i=0;i<n;i++){
			if(s[i]=='D'){
				if(resp=="N") resp="L";
				else if(resp=="S") resp="O";
				else if(resp=="L") resp="S";
				else if(resp=="O") resp="N";
			}else{
				if(resp=="N") resp="O";
				else if(resp=="S") resp="L";
				else if(resp=="L") resp="N";
				else if(resp=="O") resp="S";
			}
		}
		cout<<resp<<endl;
	}
	return 0;
}
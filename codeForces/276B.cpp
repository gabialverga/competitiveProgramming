#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int v[26];

int main(){
	string s;
	int cont=0;
	cin>>s;
	for(int i=0;i<s.size();i++){
		v[(int)s[i]-97]++;	
	}
	for(int j=0;j<26;j++){
		if(v[j]%2==1){
			cont++;
		}
	}
	if(cont==0 || cont%2==1)
		cout<<"First"<<endl;
	else if(cont%2==0)
		cout<<"Second"<<endl;
	
	return 0;
}
#include <iostream>
#include <string.h>

using namespace std;

int maS[26],miS[26];
int maT[26],miT[26];

int main(){
	string s,t;
	int tem=0,ntem=0;
	cin>>s>>t;
	for(int i=0;i<s.size();i++){
		if((int)s[i]>=97){
			miS[(int)s[i]-97]++;
		}else{
			maS[(int)s[i]-65]++;
		}
	}
	for(int i=0;i<t.size();i++){
		if((int)t[i]>=97){
			miT[(int)t[i]-97]++;
		}else{
			maT[(int)t[i]-65]++;
		}
	}
	int m=0;
	for(int i=0;i<26;i++){
		m=min(maS[i],maT[i]);
		tem+=m;
		maS[i]-=m;
		maT[i]-=m;
		m=min(miS[i],miT[i]);
		tem+=m;
		miS[i]-=m;
		miT[i]-=m;
	}
	for(int i=0;i<26;i++){
		ntem+=min(maS[i]+miS[i],maT[i]+miT[i]);
	}
	cout<<tem<<" "<<ntem<<endl;
	return 0;
}
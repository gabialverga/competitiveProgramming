#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main(){
	int b,n,bancos[21],d,c,v;
	char resp;
	while(cin>>b>>n){
		resp='S';
		if(b==0 && n==0) return 0;
		memset(bancos,0,b*sizeof(int));
		for(int i=0;i<b;i++){
			cin>>bancos[i];
		}
		for(int i=0;i<n;i++){
			cin>>d>>c>>v;
			bancos[d-1]-=v;
			bancos[c-1]+=v;
		}
		for(int i=0;i<b;i++){
			if(bancos[i]<0){
				resp ='N';
				continue;
			}
		}
		cout<<resp<<endl;
	}
	
	return 0;
}
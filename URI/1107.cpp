#include <iostream>
#include <algorithm> 

using namespace std;

int main(){
	int a,c,v[10010],resp;
	while(cin>>a>>c){
		if (a==0 && c==0) break;
		for(int i=0;i<c;i++){
			cin>>v[i];
		}
		resp=a-v[0];
		for(int i=0;i<c-1;i++){
			if(v[i]>v[i+1]){
				resp+= v[i]-v[i+1];
			}
		}
		cout<<resp<<endl;
	}
	return 0;
}
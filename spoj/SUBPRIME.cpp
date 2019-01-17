#include <iostream>

using namespace std;

int main(){
	int b,n,v[25];
	int d,c,q;
	while(true){
		bool ok = true;
		cin>>b>>n;
		if(b==0 && n==0) return 0;
		for(int i=1;i<=b;i++){
			cin>>v[i];
		}
		for(int i=1;i<=n;i++){
			cin>>d>>c>>q;
			v[d]-=q;
			v[c]+=q;
		}
		for(int i=1;i<=b;i++){
			if(v[i]<0){
				ok = false;
				break;	
			}
		}
		if(ok){
			cout<<"S\n";
		}else{
			cout<<"N\n";
		}
	}
	return 0;
}
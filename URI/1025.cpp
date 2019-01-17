#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n,q,v[10001],x,cont=1;
	bool ok;
	while(cin>>n>>q){
		if( n==0 && q==0) return 0;
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		sort(v,v+n);
		cout<<"CASE# "<<cont++<<":"<<endl;
		for(int i=0;i<q;i++){
			cin>>x;
			ok = false;
			for(int j=0;j<n;j++){
				if(v[j]==x){
					cout<<x<<" found at "<<j+1<<endl;
					ok = true;
					break;
				}
			}
			if(!ok){
				cout<<x<<" not found"<<endl;
			}
		}
	}
	return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n,k,v[55];
	cin>>n>>k;
	if(k>n){
		cout<<"-1"<<endl;
		return 0;
	}else{
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		sort(v,v+n);
		int x=0,y=0,dif;
		if(n!=k){
			dif=v[n-k]-v[n-k-1];
			x=v[n-k-1]+dif;
			y=v[n-k]-v[n-k-1];
			if(x+1<=v[n-k]){
				x++;
			}
		}
		cout<<x<<" "<<y<<endl;
	}
	return 0;
}
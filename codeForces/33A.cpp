#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int x,h[1000001];

int main(){
	int n,m,k,r,c;
	cin>>n>>m>>k;
	memset(h,-1,(m+10)*sizeof(int));
	for(int i=0;i<n;i++){
		cin>>r>>c;
		if(h[r]==-1){
			h[r]=c;
		}else if(h[r]>c){
			h[r]=c;
		}
	}
	sort(h,h+m);
	int resp=0;
	for(int i=1;i<=m;i++){
		resp+=h[i];
		if (resp>k){
			cout<<k;
			return 0;
		}
	}
	if(resp>k) cout<<k;
	else cout<<resp;
	return 0;
}
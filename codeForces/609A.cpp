#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n,v[110],m,soma=0,qnd=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
		cin>>v[i];
	}
	sort(v,v+n);
	for(int i=n-1;i>=0;i--){
		if(soma<m){
			soma+=v[i];
			qnd++;
		}
	}
	cout<<qnd<<endl;
    return 0;
}
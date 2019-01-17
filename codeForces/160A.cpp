#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n,v[110],soma=0,qnd=0,soma2=0;
    cin>>n;
    for(int i=0;i<n;i++){
		cin>>v[i];
		soma+=v[i];
	}
	soma/=2;
	sort(v,v+n);
	for(int i=n-1;i>=0;i--){
		if(soma2<=soma){
			soma2+=v[i];
			qnd++;
		}
	}
	cout<<qnd<<endl;
    return 0;
}
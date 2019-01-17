#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int x,y,k[10001];
	cin>>x>>y;
	for(int i=0;i<x;i++){
		cin>>k[i];
	}
	sort(k,k+x);
	int resp=0,max=0;
	for(int i=0;i<y;i++){
		resp+=(k[i]*-1);
		if(resp>max) max = resp;
	}
	cout<<max;
	return 0;
}
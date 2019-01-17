#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,a[1010];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	if(a[0]-1<=0){
		cout<<-1<<endl;
	}else{
		cout<<1<<endl;
	}
	return 0;
}
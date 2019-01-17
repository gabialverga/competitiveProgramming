#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,a[100100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int x=1;
	for(int i=0;i<n;i++){
		if(a[i]>=x){
			x++;
		}
	}
	cout<<x<<endl;
	return 0;
}
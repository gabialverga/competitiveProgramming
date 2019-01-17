#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,fibo[50];
	fibo[1]=0;
	fibo[2]=1;
	for(int i=3;i<46;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
	cin>>n;
	for(int i=1;i<=n-1;i++){
		cout<<fibo[i]<<" ";
	}
	cout<<fibo[n]<<endl;
	return 0;
}
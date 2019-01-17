#include <bits/stdc++.h>

using namespace std;

bool v[100100];

int main() {
	int n,p,q;
	cin>>n;
	cin>>p;
	int a;
	for(int i=0;i<p;i++){
		cin>>a;
		v[a]=true;
	}
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>a;
		v[a]=true;
	}
	bool ok = true;
	for(int i=1;i<=n;i++){
		if(!v[i]){
			ok = false;
			break;
		}
	}
	if(ok){
		cout<<"I become the guy."<<endl;
	}else{
		cout<<"Oh, my keyboard!"<<endl;
	}
	return 0;
}
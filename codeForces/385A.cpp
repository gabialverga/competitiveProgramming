#include <bits/stdc++.h>

using namespace std;

bool v[100100];

int main() {
	int n,c,a,ant,m = 0;
	cin>>n>>c;
	cin>>ant;
	for(int i=1;i<n;i++){
		cin>>a;
		m = max((ant-a-c),m);
		ant = a;
	}
	cout<<m<<endl;
	return 0;
}
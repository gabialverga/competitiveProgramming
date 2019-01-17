#include <iostream>
#include <string.h>

using namespace std;

int v[50100][10];

int main() {
	int n,m,x;
	cin>>n>>m;
	cin>>v[0][0];
	for(int j=1;j<m;j++){
		cin>>x;
		v[0][j] = v[0][j-1]+x; 
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>x;
			if(j==0) v[i][j] = v[i-1][j]+x;
			else{
				v[i][j] = max(v[i-1][j],v[i][j-1])+x;
			}
		}
	}
	cout<<v[0][m-1];
	for(int j=1;j<n;j++){
		cout<<" "<<v[j][m-1];
	}
	cout<<endl;
	return 0;
}
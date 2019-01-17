#include <iostream>

using namespace std;

int main(){
	int l,c,m[100][100],res=0,s;
	cin>>l>>c;
	for(int i=0;i<l;i++){
		for(int j=0;j<c;j++){
			cin>>m[i][j];
		}
	}
	for(int i=0;i<l;i++){
		s=0;
		for(int j=0;j<c;j++){
			s+=m[i][j];
		}
		if(s>res) res=s;
	}
	for(int i=0;i<c;i++){
		s=0;
		for(int j=0;j<l;j++){
			s+=m[j][i];
		}
		if(s>res) res=s;
	}
	cout<<res;
	return 0;
}
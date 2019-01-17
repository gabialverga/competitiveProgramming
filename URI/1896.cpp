#include <bits/stdc++.h>

using namespace std;

vector<int> m[3];
int auxA[1010];
int auxD[1010];
int auxH[1010];

int main() {
	int n,a,d,h,x;
	cin>>n>>a>>d>>h;
	memset(auxA,-1,sizeof(auxA));
	memset(auxD,-1,sizeof(auxD));
	memset(auxH,-1,sizeof(auxH));
	auxA[0] = 0;
	auxD[0] = 0;
	auxH[0] = 0;

	for(int i=0;i<n;i++){
		cin>>x;
		m[0].push_back(x);
		cin>>x;
		m[1].push_back(x);
		cin>>x;
		m[2].push_back(x);
	}
	for(int i=0;i<m[0].size();i++){
		for(int j=a;j>=m[0][i];j--){
			if(auxA[j-m[0][i]]!=-1)
				auxA[j] = max(auxA[j],auxA[j-m[0][i]]+1);
		}
	}
	for(int i=0;i<m[1].size();i++){
		for(int j=d;j>=m[1][i];j--){
			if(auxD[j-m[1][i]]!=-1)
				auxD[j] = max(auxD[j],auxD[j-m[1][i]]+1);
		}
	}
	for(int i=0;i<m[2].size();i++){
		for(int j=h;j>=m[2][i];j--){
			if(auxH[j-m[2][i]]!=-1)
				auxH[j] = max(auxH[j],auxH[j-m[2][i]]+1);
		}
	}
	if(auxA[a]>=2 && auxD[d]>=2 && auxH[h]>=2){
		cout<<"Y"<<endl;
	}else{
		cout<<"N"<<endl;
	}
	return 0;
}
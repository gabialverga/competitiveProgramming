#include <iostream>
#include <string.h>
#include <utility>
#include <vector>

using namespace std;

int v[80][210],n;
vector< pair<int,int> > bolas;

int dp(int x,int y){
	if(v[x][y]!=0) return v[x][y];
	if(x>=n) return 0;
	if(y<=0) return 0;
	int nPega = dp(x+1,y);
	if(bolas[x].second<=y){
		int Pega = bolas[x].first+dp(x+1,y-bolas[x].second);
		return v[x][y] = max(nPega,Pega);
	}
	return v[x][y] = nPega;
}

int main() {
	int c,x,y,k,r;
	cin>>c;
	for(int i=0;i<c;i++){
		cin>>n;
		bolas.clear();
		memset(v,0,sizeof(int)*80*210);
		for(int j=0;j<n;j++){
			cin>>x>>y;
			bolas.push_back(make_pair(x,y));
		}
		cin>>k>>r;
		if(dp(0,k)>=r)
			cout<<"Missao completada com sucesso"<<endl;
		else
			cout<<"Falha na missao"<<endl;
	}
	
	return 0;
}
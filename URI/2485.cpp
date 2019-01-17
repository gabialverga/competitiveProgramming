#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <string.h>
#include <queue>

using namespace std;

map< pair<int,int>,vector< pair<int,int> > > m;
map< pair<int,int>, bool> vis;
map< pair<int,int>, int> dist;

void bfs(pair<int,int> no){
	queue< pair<int,int> > q;
	q.push(no);
	vis[no] = true;
	dist[no] = 0;
	while(!q.empty()){
		pair<int,int> top = q.front();
		q.pop();
		for(int i = 0;i<m[top].size();i++){
			pair<int,int> visinho= m[top][i];
			if(!vis[visinho]){
				vis[visinho] = true;
				dist[visinho] = dist[top]+1;
				q.push(visinho);
			}
		}
	}
}

int main(){
	int n,a,b,x,y,maior=0;
	bool mat[110][110];
	cin>>n;
	for(int i=0;i<n;i++){
		
		for(map< pair<int,int>, bool>::iterator k = vis.begin();k!=vis.end();k++){
			k->second = false;
		}
		for(map< pair<int,int>, int>::iterator k = dist.begin();k!=dist.end();k++){
			k->second = -1;
		}
		for(map< pair<int,int>,vector< pair<int,int> > >::iterator k = m.begin();k!=m.end();k++){
			for(int h=0;h<k->second.size();h++){
				k->second.clear();
			}
		}
		
		maior = 0;
		cin>>a>>b;
		for(int j=0;j<a;j++){
			for(int k=0;k<b;k++){
				vis[make_pair(j,k)] = false;
				dist[make_pair(j,k)] = -1;
				cin>>mat[j][k];
			}
		}
		for(int j=0;j<a;j++){
			for(int k=0;k<b;k++){
				if(mat[j][k]){
					if(j-1>=0 && k-1>=0  && mat[j-1][k-1]){
						m[make_pair(j,k)].push_back(make_pair(j-1,k-1));
					}
					if(j-1>=0 && mat[j-1][k]){
						m[make_pair(j,k)].push_back(make_pair(j-1,k));
					}
					if(k-1>=0 && mat[j][k-1]){
						m[make_pair(j,k)].push_back(make_pair(j,k-1));
					}
					if(j+1<a && k+1<b && mat[j+1][k+1]){
						m[make_pair(j,k)].push_back(make_pair(j+1,k+1));
					}
					if(j+1<a && mat[j+1][k]){
						m[make_pair(j,k)].push_back(make_pair(j+1,k));
					}
					if(j+1<a && k-1>=0 && mat[j+1][k-1]){
						m[make_pair(j,k)].push_back(make_pair(j+1,k-1));
					}
					if(k+1<b && mat[j][k+1]){
						m[make_pair(j,k)].push_back(make_pair(j,k+1));
					}
					if(j-1>=0 && k+1<b && mat[j-1][k+1]){
						m[make_pair(j,k)].push_back(make_pair(j-1,k+1));
					}
				}
			}
		}
		cin>>x>>y;
		maior = 0;
		bfs(make_pair(x-1,y-1));
		for(int j=0;j<a;j++){
			for(int k=0;k<b;k++){
				maior = max(maior, dist[make_pair(j,k)]);
			}
		}
		cout<<maior<<endl;
	}
	return 0;
}

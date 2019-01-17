#include <iostream>
#include <queue>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	map< string, vector<string> > ladj;
	string a, b;
	for(int i=0; i<m; i++){
		cin >> a >> b;
		ladj[a].push_back(b);
		ladj[b].push_back(a);
	}
	
	map<string, int> dist1, dist2;
	
	queue<string> fila;
	fila.push("Entrada");
	dist1["Entrada"] = 0;
	while(!fila.empty()){
		string v = fila.front();
		fila.pop();
		
		for(unsigned i=0; i<ladj[v].size(); i++){
			if(dist1[ladj[v][i]]==0){
				dist1[ladj[v][i]] = dist1[v] + 1;
				fila.push(ladj[v][i]);
			}
		}
		
		if(dist1["*"]) break;
	}

	queue<string> fila2;
	fila2.push("*");
	dist2["*"] = 0;
	while(!fila2.empty()){
		string v = fila2.front();
		fila2.pop();
		
		for(unsigned i=0; i<ladj[v].size(); i++){
			if(dist2[ladj[v][i]]==0){
				dist2[ladj[v][i]] = dist2[v] + 1;
				fila2.push(ladj[v][i]);
			}
		}
		
		if(dist2["Saida"]) break;
	}
	cout << dist1["*"] + dist2["Saida"] << endl;
	return 0;
}
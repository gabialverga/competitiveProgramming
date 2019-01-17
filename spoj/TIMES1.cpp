#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef struct{
	string nome;
	int hab;
}jogador;

bool compare(jogador a, jogador b){
	if(a.hab>b.hab) return true;
	else return false;
}

bool compare2(jogador a, jogador b){
	if(a.nome>b.nome) return true;
	else return false;
}
int main(){
	int qnt,equipe;
	cin>>qnt>>equipe;
	vector<jogador> eqps[equipe];
	jogador jogadores[10010];
	for(int i=0;i<qnt;i++){
		cin>>jogadores[i].nome>>jogadores[i].hab;
	}
	sort(jogadores,jogadores+qnt,compare);
	int j=0;
	for(int i=0;i<qnt;i++){
		eqps[j].push_back(jogadores[i]);
		j++;
		if(j>=equipe) j=0;
	}
	for(int i=0;i<equipe;i++){
		cout<<"Time "<<i+1<<endl;
		sort(eqps[i].begin(),eqps[i].end(),compare2);
		for(int j=eqps[i].size()-1;j>=0;j--){
			cout<<eqps[i][j].nome<<endl;
		}
		cout<<endl;
	}
	return 0;
}
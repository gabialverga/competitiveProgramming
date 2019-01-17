#include<algorithm>
#include <iostream>

using namespace std;

typedef struct{
	int numero, posicao;
}carro;

bool compare(carro a, carro b){
	if(a.posicao>b.posicao) return false;
	else return true;
}

int main(){
	int n,x;
	carro c[10001];
	while(true){
		cin>>n;
		if(n==0) return 0;
		for(int i=0;i<n;i++){
			cin>>c[i].numero>>x;
			c[i].posicao=1+i+x;
		}
		sort(c,c+n,compare);
		bool ok=true;
		for(int i=0;i<n;i++){
			if(c[i].posicao!=(i+1)) ok = false;
		}
		if(!ok) cout<<-1<<endl;
		else{
			cout<<c[0].numero;
			for(int i=1;i<n;i++){
				cout<<" "<<c[i].numero;
			}
			cout<<endl;
        }
	}
	return 0;
}
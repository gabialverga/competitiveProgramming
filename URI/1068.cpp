#include <iostream>
#define tam 10001
using namespace std;

typedef struct{
      int topo ;
      int valor [tam] ;
}PILHA;

void iniciaPilha (PILHA &p) {
     p.topo = -1 ;
}

bool pilhaVazia(PILHA p){
    if(p.topo == -1 )
        return true;
    else
        return false;
}

void empilha(PILHA &p, int x){
    p.valor[++p.topo]=x;
}

int desempilha(PILHA &p){
    if(p.topo-1<-1)// se entrar aqui, é porque tem mais ) doque ( então já deu errado ai retorna -10 e já breaka o for
    return -10;
    return (p.valor[p.topo--]);
}

int main(){
	PILHA p;
	string n;
	while(cin>>n){
		iniciaPilha(p);
		bool ok=true;
		int i=0;
        
		for(int j=0;j<n.size();j++){
			if(n[j]=='(')
				empilha(p,n[j]);
			else if(n[j]==')')
			if(desempilha(p)==-10){
			ok = false;
			break;
			}
		}
		if(pilhaVazia(p) && ok)
			cout<<"correct"<<endl;
		else
		cout<<"incorrect"<<endl;
	}
	return 0;
}
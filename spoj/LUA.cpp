#include <iostream>

using namespace std;

int main(){
	int n,m,menor,k=1;
	while(true){
		cin>>n>>m;
		if(n==0 && m ==0) return 0;
		int v[n];
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		menor =0;
		int soma=0;
		for(int i=0;i<m;i++){
			soma+=v[i];
		}
		menor=soma/m;
		int a=0,maior;
		maior = menor;
		int med=menor;
		while(a<(n-m)){
			soma-=v[a];
			soma+=v[m+a];
			med=soma/m;
			if(med>maior) maior = med;
			if(med<menor) menor = med;
			a++;
		}
		cout<<"Teste "<<k++<<endl;
		cout<<menor<<" "<<maior<<endl<<endl;	
	}
	return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,custoPorDia,v[100];
	while(cin>>n){
		cin>>custoPorDia;
		for (int i = 0; i < n; i++){
			cin>>v[i];
		}
		int resp = 0,soma;
		for (int i = 0; i < n; i++){
			soma = 0;
			for (int j = i; j < n; j++){
				soma+=v[j]-custoPorDia;
				resp = max(resp,soma);
			}
		}
		cout<<resp<<endl;
	}
	return 0;
}
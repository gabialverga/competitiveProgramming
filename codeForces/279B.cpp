#include <iostream>

using namespace std;

int main(){
	int n,t,x,v[100010],soma=0;
	cin>>n>>t;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int ini=0,fim=0,maior=0;
	while(ini<n && fim<n){
		if(soma<=t){
			soma+=v[fim];
			fim++;
			if(fim-ini>maior && soma<=t){
				maior=fim-ini;
			}
		}else if(soma>t && fim>=n){
			soma-=v[ini];
			ini++;
			if(fim-ini>maior && soma<=t){
				maior=fim-ini;
			}
		}else{
			soma+=v[fim];
			fim++;
			soma-=v[ini];
			ini++;
			if(fim-ini>maior && soma<=t){
				maior=fim-ini;
			}
		}
		if(fim>=n && soma<=t){
			break;
		}
	}
	cout<<maior<<endl;
	return 0;
}
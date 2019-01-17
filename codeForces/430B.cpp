#include <iostream>

using namespace std;

int main(){
	int n,k,x,v[110],c[110][2];
	bool ok;
	cin>>n>>k>>x;
	ok=false;
	int j=0,a;
	for(int i=0;i<n;i++){
		cin>>v[i];
		if(v[i]==x && !ok){
			ok=true;
			a=i;
		}else if(v[i]==x){
			c[j][0]=a;
			c[j][1]=i;
			j++;
			ok=false;
		}else{
			ok=false;
		}
	}
	int cont=0;
	bool okIni,okFim;
	for(int i=0;i<j;i++){
		int ini = c[i][0];
		int fim = c[i][1];
		if(ini>0 && fim<n-1){
			do{
				okIni=false;
				okFim=false;
				int cor = v[ini-1];
				if(v[fim+1]==cor){
					if(v[ini-2]==cor && ini>1){
						okIni = true;
						while(v[ini-1]==cor && ini>0){
							ini--;
						}
						while(v[fim+1]==cor && fim<n-1){
							fim++;
						}
					}
					if((v[fim+2]==cor && fim<n-1)){
						okFim = true;
						while(v[ini-1]==cor && ini>0){
							ini--;
						}
						while(v[fim+1]==cor && fim<n-1){
							fim++;
						}
					}
	  	  	    }
			}while(okIni || okFim);
		}
		if(cont < fim-ini+1){
			cont = fim-ini+1;
		}
	}
	cout<<cont<<endl;
	return 0;
}
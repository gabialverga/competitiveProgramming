#include <iostream>
#include <cstring>

using namespace std;

typedef struct{
	int d;
	int e;
}bota;

bota b[31];

int main(){
	int n,t,pares;
	char l;
	while(cin>>n){
		for(int i=0;i<n;i++){
			cin>>t>>l;
			if(l=='D') b[t-30].d++;
			else b[t-30].e++;
		}
		pares=0;
		for(int i=0;i<31;i++){	
				if(b[i].d>=b[i].e) pares+=b[i].e;
				else if(b[i].d<b[i].e) pares+=b[i].d;
				b[i].d=0;
				b[i].e=0;
		}
		cout<<pares<<endl;
	}
	return 0;
}
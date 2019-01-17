#include <iostream>
#include <string.h>

using namespace std;

bool v[10];
bool verifica(int x){
	int r=0;
	for(int i=0;i<10;i++){
		v[i]=false;
	}
	while(x>0){
		r=x%10;
		x/=10;
		if(v[r]){
			return true;
		}
		else{
			v[r]=true;
		}
	}
	return false;
}

int main(){
	int n,m,cont=0;
	while(cin>>n>>m){
		cont=0;
		for( int i=n;i<=m;i++){
			if(!verifica(i)){
				cont++;
			}
		}
		cout<<cont<<endl;
	}
	return 0;
}
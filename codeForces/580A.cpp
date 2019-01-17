#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,x,ant,cont=1,antcont=1;
	cin>>n;
	cin>>x;
	cont=1;
	ant=x;
	for(int i=1;i<n;i++){
		cin>>x;
		if(x>=ant){
			cont++;
		}else{
			if(cont>antcont) antcont = cont;
			cont=1;
		}
		ant = x;
	}
	cout<<max(cont,antcont)<<endl;
	return 0;
}
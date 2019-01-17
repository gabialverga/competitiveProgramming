#include <iostream>

using namespace std;

int main(){
	int n,num,cont=1,ax,comp=0;
	cin>>n>>num;
	ax=num;
	for(int i=0;i<n-1;i++){
		cin>>num;
		if(ax!=num){
			ax=num;
			if(comp<cont){
				comp=cont;
			}
			cont=1;
		}else{
			ax=num;
			cont++;
		}
	}
	if(comp>cont)cout<<comp;
	else cout<<cont;
	return 0;
}

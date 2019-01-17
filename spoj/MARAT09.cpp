#include <iostream>

using namespace std;

int main(){
	int n,v,ant,x,ok=0;
	cin>>n>>v;
	cin>>ant;
	for(int i=0;i<n-1;i++){
		cin>>x;
		if(x-ant>v){
			ok=1;
		}
		ant=x;
	}
	if(42195-ant>v){
			ok=1;
	}
	if(ok) cout<<"N";
	else cout<<"S";
	return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main(){
	int n,t;
	string nome[51];
	t=0;
		cin>>n;
		if(n==0) return 0;
		for(int i=0;i<n;i++){
			cin>>nome[i];
			int x=nome[i].size();
			if(x>t) t=x;
		}
		for(int i=0;i<n;i++){
			int y=nome[i].size();
			for(int j=0;j<t-y;j++) cout<<" ";	
			cout<<nome[i]<<endl;
		}
	while(true){
		t=0;
		cin>>n;
		if(n==0) return 0;
		else cout<<endl;
		for(int i=0;i<n;i++){
			cin>>nome[i];
			int x=nome[i].size();
			if(x>t) t=x;
		}
		for(int i=0;i<n;i++){
			int y=nome[i].size();
			for(int j=0;j<t-y;j++) cout<<" ";	
			cout<<nome[i]<<endl;
		}
		
	}
	return 0;
}
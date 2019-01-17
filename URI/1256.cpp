#include <iostream>
#include <string>

using namespace std;

int main(){
	int n,m,c,x[202][2];
	cin>>n;
	cin>>m>>c;
		for(int j=0;j<c;j++){
			cin>>x[j][0];
			x[j][1]=x[j][0]%m;
		}
		for(int j=0;j<m;j++){
			cout<<j<<" -> ";
			for(int k=0;k<c;k++){
				if(x[k][1]==j){
					cout<<x[k][0]<<" -> ";
				}
			}
			cout<<"\\"<<endl;
		}
	for(int i=1;i<n;i++){
		cin>>m>>c;
		cout<<endl;
		for(int j=0;j<c;j++){
			cin>>x[j][0];
			x[j][1]=x[j][0]%m;
		}
		for(int j=0;j<m;j++){
			cout<<j<<" -> ";
			for(int k=0;k<c;k++){
				if(x[k][1]==j){
					cout<<x[k][0]<<" -> ";
				}
			}
			cout<<"\\"<<endl;
		}
	}
	return 0;
}
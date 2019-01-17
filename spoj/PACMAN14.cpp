#include <iostream>

using namespace std;

int main(){
	int n,c=0,comp=0;
	char m[1001][1001];
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>m[i][j];
		}
	}
	for(int i=0;i<n;i++){
		if(i%2==0){
			for(int j=0;j<n;j++){
				if(m[i][j]=='o'){
					c++;
				}else if(m[i][j]=='A'){
					if(c>comp){
						comp=c;
					}
					c=0;
				}
			}
		}else{
			for(int j=n;j>=0;j--){
				if(m[i][j]=='o'){
					c++;
				}else if(m[i][j]=='A'){
					if(c>comp){
						comp=c;
					}
					c=0;
				}
			}
		}
	}
	if(c>comp) cout<<c;
	else cout<<comp;
	return 0;
}


#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n,m,v[1001],v2[1001];
	while(cin>>n){
		for(int j=0;j<n;j++){
			cin>>m;
			for(int i=0;i<m;i++){
				cin>>v[i];
			}
			for(int i=0;i<m;i++){
				v2[i]=v[i];
			}
			sort(v2,v2+m);
			int cont=0;
			for(int i=m;i>=0;i--){
				if(v2[i]==v[m-i-1]){
					cont ++;
				}
			}
			cout<<cont<<endl;	
		}
	}
	return 0;
}
#include <iostream>

using namespace std;

int main(){
	long long int n=1, v[1001],soma,s;
	while(true){
		cin>>n;
		if(n==0) break;
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		s=0;
		for(int i=n-1;i>=0;i--){
			s+=v[i];
			for(int j=0;j<i;j++){
				v[j]+=v[i];
			}
		}
		cout<<s<<endl;
	}
	return 0;
}
#include <iostream>

using namespace std;

int main(){
	int n,m,soma=0;
	cin>>n>>m;
	for(int i=min(n,m)+1;i<max(n,m);i++){
		if(i%2!=0) soma+=i;
	}
	cout<<soma<<endl;
	return 0;
}
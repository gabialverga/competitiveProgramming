#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int main(){
	int n,m,cont=0;
	cin>>n>>m;
	if(m<=n){
		cout<<n-m<<endl;
	}else{
		while(n<m){
			if(m%2==0) m/=2;
			else m++;
			cont++;
		}
		cout<<cont+n-m<<endl;
	}
	return 0;
}
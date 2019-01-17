#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

long long int fat(long long int n){
	long long int fat = 1;
	for(long long int i=1;i<=n;i++){
		fat*=i;
	}
	return fat;
}

int main(){
	long long int a,b;
	cin>>a>>b;
	cout<<fat(min(a,b));
    return 0;
}
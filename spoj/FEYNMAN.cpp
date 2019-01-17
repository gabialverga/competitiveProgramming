#include <iostream>

using namespace std;

int main() {
	int n=1;
	while(true){
		cin>>n;
		if(n==0){
			return 0;
		}
		cout<<(2*(n*n*n)-3*(n*n)+n)/6+(n*n)<<endl;
	}
        return 0;
}
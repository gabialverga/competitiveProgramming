#include <iostream>

using namespace std;

int main(){
	int n,a,b,pa,pb;
	while(true){
		cin>>n;
		if(n==0) break;
		pa=0;
		pb=0;
		for(int i=0;i<n;i++){
			cin>>a>>b;
			if(a>b) pa++;
			else if(b>a) pb++;
		}
		cout<<pa<<" "<<pb<<endl;
	}
	return 0;
}
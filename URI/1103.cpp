#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int h1,m1,h2,m2;
	while(cin>>h1>>m1>>h2>>m2){
		if(h1==0 && m2==0 && h1==0 && m2==0) return 0;
		if(h2>h1){
			cout<<((h2-h1)*60)+(m2-m1)<<endl;
		}else if(h2<h1){
			cout<<((23-h1+h2)*60)+(60-m1+m2)<<endl;
		}else if(m1>m2){
			cout<<((23-h1+h2)*60)+(60-m1+m2)<<endl;
		}else{
			cout<<m2-m1<<endl;
		}
	}
	
	return 0;
}
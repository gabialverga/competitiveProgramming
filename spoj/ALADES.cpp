#include <iostream>

using namespace std;

int main(){
	int h1,h2,m1,m2;
	while(true){
		cin>>h1>>m1>>h2>>m2;
		if(h1==0 && h2==0 && m1==0 && m2==0) return 0;
		if(h2==0) h2=24;
		if(h1==0) h1=24;
		if(h1<h2) cout<<((h2-h1)*60)+(m2-m1)<<endl;
		else if(h1>h2) cout<<(1440-((h1-h2)*60))-(m1-m2)<<endl;
		else if (m1<m2) cout<<m2-m1<<endl;
		else if (m1>m2) cout<<1440-(m1-m2)<<endl;
		else if(m1==m2) cout<<0<<endl;
	}
}
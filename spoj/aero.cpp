#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int a,v,b[101],x,y,c=1,m;
	while(true){
		cin>>a>>v;
		memset(b,0, sizeof(b));
		if(a==0 && v==0) return 0;
		for(int i=0;i<v;i++){
			cin>>x>>y;
			b[x]++;
			b[y]++;
		}
		m=b[1];
		for(int i=1;i<=a;i++){
			if(b[i]>m) m=b[i];
		}
		cout<<"Teste "<<c<<endl;
		for(int i=0;i<=a;i++){
			if(b[i]==m) cout<<i<<" ";
		}
		cout<<endl<<endl;
		c++;
	}
	return 0;
}

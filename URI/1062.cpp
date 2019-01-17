#include <iostream>
#include <stack>

using namespace std;

int main(){
	int n=1,v;
	cin>>n;
	while(true){
		if(n==0) break;
		stack <int> p;
		int cont=1;
		bool ok = true;
		while(true){
			for(int i=0;i<n;i++){
				cin>>v;
				if(v==0){ 
					ok=false;
					break;
				}
				if(p.size()>0 && v==p.top()){
					p.pop();
				}else{
					while(p.size() == 0 || (v!=p.top() && cont<=n)){
						p.push(cont);
						cont++;
					}
					if(v==p.top())p.pop();
				}
			}
			if(ok==false) break;
			if(p.size()>0){
				cout<<"No"<<endl;
			}else{
				cout<<"Yes"<<endl;
			}
            while(p.size() > 0)p.pop();
            cont = 1;
		}
		cin >> n;
		cout << endl;
		if(n == 0)break;
	}
	return 0;
}
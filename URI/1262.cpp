#include<iostream>

using namespace std;

int main(){
	string p;
	int n,resp,r;
	while(cin>>p){
		resp = 0;
		r = 0;
		cin>>n;
		for(int i=0;i<p.size();i++){
			if(p[i]=='W') resp++;
			if(p[i]=='R') r++;
			if(r==n || (p[i]=='R' && p[i+1]=='W')){
				resp++;
				r=0;
			}
		}
		if(r>0) resp++;
		cout<<resp<<endl;
	}
	return 0;
}
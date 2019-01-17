#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main(){
	int p,pr[15],s,t1,t2,t3,n,d1,d2,ind;
	bool ok[15],acho;
	while(true){
		ind=0;
		cin>>p>>s;
		if(p==0 && s==0) return 0;
		for(int i=0;i<15;i++){
			pr[i]=0;
			ok[i]=true;
		}
		cin>>t1>>t2>>t3;
		cin>>n;
		acho=false;
		for(int i=0;i<n;i++){
			cin>>d1>>d2;
			if(ind>=p) ind=0;
			if(ok[ind]){
				pr[ind]+=(d1+d2);
				if(pr[ind]==t1 || pr[ind]==t2 || pr[ind]==t3) ok[ind]=false;
				if(pr[ind]>s){
					cout<<ind+1<<endl;
					continue;
				}
				ind++;
				
			}else{
				while(!ok[ind]){
					if(ind>=p) ind=0;
					ok[ind]=true;
					ind++;
				}
				if(ind>=p) ind=0;
				pr[ind]+=(d1+d2);
				if(pr[ind]==t1 || pr[ind]==t2 || pr[ind]==t3) ok[ind]=false;
				if(pr[ind]>s){
					cout<<ind+1<<endl;
					continue;
				}
				ind++;
			}
		}
	}
	return 0;
}
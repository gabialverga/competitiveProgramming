#include <iostream>
#include <math.h>

using namespace std;

int main(){
	string n;
	while(getline(cin,n)){
		bool ok=false;
		string n2;
		n2="";
		for(int i=0;i<n.size();i++){
			if(n[i]=='o' || n[i]=='O'){
				n2 += '0';
			}else if(n[i]=='l'){
				n2 +='1';
			}else if(n[i]>='0' && n[i]<='9'){
				n2 += n[i];
			}else if(!(n[i]==' ' ||  n[i]==',')){
				ok=true;
			}
		}
		unsigned long long int j=0,k=0;
		
		if(n2.size() == 0) {
			cout << "error" << endl;
			continue;
		}
		
		while(n2[k]=='0'){
			k++;
		}
		if(ok==false && n2.size()==k){
			cout<<0<<endl;
			continue;
		}
		if((n2.size()-k)>10) {
			   cout << "error" << endl;
			   continue;	
		} 
		unsigned long long int x=n2.size()-1-k;
		for(long long int i=k;i<n2.size();i++){
			j+=(n2[i]-48)*pow(10,x);
			x--;
		}
		if(j> 2147483647){
			cout<<"error"<<endl;
		}else if(n2.size()==0 || ok==true)
			cout<<"error"<<endl;
		else 
			cout<<j<<endl;	
	}
	return 0;
}
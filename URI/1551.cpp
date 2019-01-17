#include <iostream>

using namespace std;

int main(){
	int n,v[27];
	string frase;
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++){
		getline(cin,frase);
		for(int j=0;j<26;j++){
			v[j]=0;
		}
		for(int j=0;j<frase.size();j++){
			if(frase[j]>='a' && frase[j]<='z'){
				v[frase[j]-97]++;
			}
		}
		int x=0;
		for(int j=0;j<26;j++){
			if(v[j]>0){
				x++;
			}
		}
		if(x==26){
			cout<<"frase completa"<<endl;
		}else if(x>=13){
			cout<<"frase quase completa"<<endl;
		}else{
			cout<<"frase mal elaborada"<<endl;
		}
	}
	return 0;
}
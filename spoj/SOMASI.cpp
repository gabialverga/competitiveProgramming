#include <iostream>

using namespace std;

int main(){
	int n;
	string a,b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		if(((a[a.size()-1])-48)%2==0 && ((b[b.size()-1])-48)%2==0){
			cout<<"Par"<<endl;
		}else if(((a[a.size()-1])-48)%2==1 && ((b[b.size()-1])-48)%2==1){
			cout<<"Par"<<endl;
		}else{
			cout<<"Impar"<<endl;
		}
	}
	
	return 0;
}
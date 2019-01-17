#include <iostream>

using namespace std;

int main(){
	int n,x,px=4,py=3,cont=0;
	bool ok=true;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x==1){
			px+=1;
			py+=2;
		}else if(x==2){
			px+=2;
			py+=1;
		}else if(x==3){
			px+=2;
			py-=1;
		}else if(x==4){
			px+=1;
			py-=2;
		}else if(x==5){
			px-=1;
			py-=2;
		}else if(x==6){
			px-=2;
			py-=1;
		}else if(x==7){
			px-=2;
			py+=1;
		}else if(x==8){
			px-=1;
			py+=2;
		}
		if(ok) cont++;
		if(px==1 && py==3 || px==2 && py==3 || px==2 && py==5 || px==5 && py==4){
			ok=false;	
		}
	}
	cout<<cont;
	return 0;
}

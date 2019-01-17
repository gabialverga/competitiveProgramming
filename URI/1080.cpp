#include <iostream>

using namespace std;

int main(){
	int x,maior=0,pos=0;
	for(int i=0;i<100;i++){
		cin>>x;
		if(x>maior){
			maior=x;
			pos=i;
		}
	}
	cout<<maior<<endl<<pos+1<<endl;
	
	return 0;
}
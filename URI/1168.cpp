#include <iostream>

using namespace std;

int main(){
	long int n,led;
	string num;
	cin>>n;
	for(int i=0;i<n;i++){
		led=0;
		cin>>num;
		for(int j=0;j<num.size();j++){
			if(num[j]=='1'){
				led+=2;		
			}else if(num[j]=='2' || num[j]=='3' || num[j]=='5'){
				led+=5;
			}else if(num[j]=='4'){
				led+=4;
			}else if(num[j]=='6' || num[j]=='9' || num[j]=='0'){
				led+=6;
			}else if(num[j]=='7'){
				led +=3;
			}else{
				led+=7;
			}
		}
		cout<<led<<" leds"<<endl;
	}
	return 0;
}
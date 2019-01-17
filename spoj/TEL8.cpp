#include <iostream>
#include <string.h>

using namespace std;

int main(){
	string tel;
	cin>>tel;
	for(int i=0;i<tel.size();i++){
		if(tel[i]>=65 && tel[i]<=67) tel[i]='2';
		if(tel[i]>=68 && tel[i]<=70) tel[i]='3';
		if(tel[i]>=71 && tel[i]<=73) tel[i]='4';
		if(tel[i]>=74 && tel[i]<=76) tel[i]='5';
		if(tel[i]>=77 && tel[i]<=79) tel[i]='6';
		if(tel[i]>=80 && tel[i]<=83) tel[i]='7';
		if(tel[i]>=84 && tel[i]<=86) tel[i]='8';
		if(tel[i]>=87 && tel[i]<=90) tel[i]='9';
	}
	cout<<tel;
	return 0;
}

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	string  frase;
	int esp=0;
	getline(cin,frase);
	for(int i=0;i<frase.size();i++){
		if(frase[i]==' '){
			cout<<frase[i];
			esp++;
		}else if((i-esp)%2==1){
			cout<<frase[i];
		}
	}
	return 0;
}


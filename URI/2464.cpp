#include <iostream>
#include <string.h>

using namespace std;

int main(){
	string alfabeto;
	string frase;
	cin>>alfabeto>>frase;
	for(int i=0;i<frase.size();i++){
		frase[i]=alfabeto[int(frase[i])-97];
	}
	cout<<frase<<endl;
	return 0;
}
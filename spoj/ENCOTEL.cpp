#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string nome;
	while(cin>>nome){
		for (int i =0;i<nome.size();i++){
			if (nome[i]>=65 && nome[i]<=67)
				nome[i] = '2';
			if (nome[i]>=68 && nome[i]<=70)
				nome[i] = '3';
			if (nome[i]>=71 && nome[i]<=73)
				nome[i] = '4';
			if (nome[i]>=74 && nome[i]<=76)
				nome[i] = '5';
			if (nome[i]>=77 && nome[i]<=79)
				nome[i] = '6';
			if (nome[i]>=80 && nome[i]<=83)
				nome[i] = '7';
			if (nome[i]>=84 && nome[i]<=86)
			  	nome[i] = '8';
			if (nome[i]>=87 && nome[i]<=90)
			  	nome[i] = '9';
		}
		cout <<nome<< endl;
	}
return 0;
}
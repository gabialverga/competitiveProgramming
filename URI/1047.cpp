#include <iostream>

using namespace std;

int main(){
	int h1,m1,h2,m2;
	cin>>h1>>m1>>h2>>m2;
	int horas,minutos;
	if(h1>=h2){
		horas=24-(h1-h2);
		if(m1>m2){
			horas--;
			minutos=60-(m1-m2);
		}else{
			minutos=m2-m1;
		}
	}else{
		horas=h2-h1;
		if(m1>m2){
			horas--;
			minutos=60-(m1-m2);
		}else{
			minutos=m2-m1;
		}
	}
	cout<<"O JOGO DUROU "<<horas<<" HORA(S) E "<<minutos<<" MINUTO(S)"<<endl;
	return 0;
}
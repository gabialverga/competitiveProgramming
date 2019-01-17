#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(){
	float v[3];
	cin>>v[0]>>v[1]>>v[2];
	sort(v,v+3);
	if(v[2]>=v[0]+v[1]){
		cout<<"NAO FORMA TRIANGULO"<<endl;
	} 
	else{
		if((v[2]*v[2])==(v[0]*v[0])+(v[1]*v[1])){
			cout<<"TRIANGULO RETANGULO"<<endl;
			if(v[0]==v[1]){
				cout<<"TRIANGULO ISOELES"<<endl;
			}
		}
		else if((v[2]*v[2])>(v[0]*v[0])+(v[1]*v[1])){
			cout<<"TRIANGULO OBTUSANGULO"<<endl;
			if(v[0]==v[1] || v[1]==v[2] || v[0]==v[2]){
				cout<<"TRIANGULO ISOSCELES"<<endl;
			}
		}
		else if((v[2]*v[2])<(v[0]*v[0])+(v[1]*v[1])){
			cout<<"TRIANGULO ACUTANGULO"<<endl;
			if(v[0]==v[1] && v[1]==v[2]){
				cout<<"TRIANGULO EQUILATERO"<<endl;
			}else if(v[0]==v[1] || v[1]==v[2] || v[0]==v[2]){
				cout<<"TRIANGULO ISOSCELES"<<endl;
			}
		}
		
	}
	return 0;
}
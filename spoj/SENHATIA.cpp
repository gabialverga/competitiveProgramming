#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int N,M,A,K,contM=0,contA=0,contK=0;
	string nome;
	cin >> N >> M >> A >> K;
	cin >> nome;
	if (nome.size() < N){
		cout << "Ufa :)";
		return 0;
	}
	for (int i =0; i< nome.size();i++){
		   if ((nome[i] >= 65) && (nome[i] <=90)){
			   contA++;
		   }	   	
		   if ((nome[i] >=97) && (nome[i]<=122)){
			   contM++;
		   }
	  	   if ((nome[i]>=48) && (nome[i]<=57)){
				 contK++;
			 }
	   }	
	   if (contM < M){
		   cout << "Ufa :)";
		   return 0;
	   }
	   else if (contA < A){
		   cout << "Ufa :)";
		   return 0;
	   }
	   else if (contK < K){
		   cout << "Ufa :)";
		   return 0;
	   }
	   else {
		   cout << "Ok =/";
	   }
return 0;
}

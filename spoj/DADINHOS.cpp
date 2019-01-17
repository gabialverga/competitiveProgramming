#include <iostream>

using namespace std;

int main (){
	   int n,c,d,aux=1;
	   while (true){
		   cin >> n >> c >>d;
		   if (n ==0 && c == 0 && d==0) break;
		   aux = n*c*d;
	   	   cout << aux << endl;
   		   aux =1;
			 }	
	return 0;   
   }
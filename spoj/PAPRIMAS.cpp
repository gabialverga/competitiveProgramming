#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nome;
    int l,soma=0,a;
    
    while(cin>>nome){
        
         l=nome.size();
         soma = 0;
         for(int i =0;i<l;i++) {
                 a=nome[i];
                 if(nome[i]>=97) {
                     soma=soma+a-96;
                 }
                 else{
                      soma=soma+a-38;
                 }
         }
         a = 0;
         if(soma==1){
             cout<<"It is a prime word.\n";
         }
         else{
             for(long i=2;i<soma;i++){
                      if(soma%i==0) {
                          a=1;
                      }
             }
             if(a==1) {
                 cout<<"It is not a prime word.\n";
             }
             else {
                 cout<<"It is a prime word.\n";
             }
         }
         
    }

    return 0;
}

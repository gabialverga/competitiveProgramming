#include <iostream>
#include <string>

using namespace std;

int main(){
  int cod, qnt;
  cin>>cod>>qnt;
  float resp=0;
  if(cod == 1){
      resp = 4*qnt;
  }else if(cod == 2){
      resp = 4.5*qnt;
  }else if(cod == 3){
      resp = 5*qnt;
  }else if(cod == 4){
      resp = 2*qnt;
  }else if(cod == 5){
      resp = 1.5*qnt;
  }
  printf("Total: R$ %.2f\n", resp);
  
  return 0;
}

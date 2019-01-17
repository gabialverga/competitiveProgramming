#include <iostream>
#include <string.h> 	

using namespace std;

int main() {
  int mapa[501][501];
  int N,x,y;
  int caiu = 0;
  cin>>N;
  memset(mapa,0,(501*501)*sizeof(int));
  while(N>0){
    cin>>x>>y;
    mapa[x][y]++;
    if(mapa[x][y]>1){ 
       caiu=1;
       break;
    }
    N--;
  }
cout<<caiu;
  return 0;
}



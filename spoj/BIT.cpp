#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int valor,c=1,n50,r50,n10,r10,n5,n1;
  while (true){
      cin>>valor;
      if(valor==0)break;
      n50=valor/50;
      r50=valor%50;
      n10= r50/10;
      r10=valor%10;
      n5=r10/5;
      n1=valor%5;
       cout<<"Teste "<<c<<endl<<n50<<" "<<n10<<" "<<n5<<" "<<n1<<endl;
       c++;
}
   return 0;
}

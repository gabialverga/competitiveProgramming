#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int c,n,d;
    cin >>n;
    d=0;
    for(c=1;c<=n;c++){
       if(n%c==0){
         d++;
         }
    }
    if (d==2){
     cout<<"sim";
     }else{
       cout<<"nao";
       }                         
    return 0;
}
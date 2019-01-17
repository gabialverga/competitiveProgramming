#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{ 
    int a,n,f,c=0;
    cin>>a>>n;
    for( ;n>0;n--){
     cin>>f;
     if(f*a>=40000000)c++;}
     cout<<c;
    return 0;
}
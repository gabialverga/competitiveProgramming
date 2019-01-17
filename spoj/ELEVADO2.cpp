#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int q=0,x=0,i,n,c,s,e;
    cin>>n>>c;
    for(i=0;i<n;i++){
     cin>>s>>e;
     x=(e-s)+x;
     if(x>c){q++;}
     }
     if(q>0){cout<<"S";}else{cout<<"N";}
   
    return 0;
}


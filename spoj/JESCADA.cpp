#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n,t,a=0,c=0;

    cin>>n;
    cin>>t;
     a=t;
    for(int i=0;i<n-1;i++){
     cin>>t;
     if(t-a<10)c=(t-a)+c; else c=c+10;
     a=t;
    }
    cout<<c+10<<"\n";
    
    return 0;
}
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n,x=0,i,a;
    cin>>n;
    for(i=0;i<n;i++){
    cin>>a;
    x=a+x;
    }   
    cout<<x;
    return 0;
}



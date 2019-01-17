#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n,l,c,q=0;
    cin>>n;
    for(int i=0;i<n;i++){
     cin>>l>>c;
     if(c<l)q=q+c;}
     cout<<q;
    return 0;
}

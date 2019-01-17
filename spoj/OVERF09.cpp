#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n,p,q;
    char c;
    cin>>n>>p>>c>>q;
    if(c=='+')p=p+q;
    if(c=='*')p=p*q;
    if(p<=n)cout<<"OK";
    if(p>n)cout<<"OVERFLOW";
    return 0;
}

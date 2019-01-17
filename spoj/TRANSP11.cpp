#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a,b,c,x,y,z;
    cin>>a>>b>>c>>x>>y>>z;
    a=(x/a)*(y/b)*(z/c);
    cout<<a;
    return 0;
}
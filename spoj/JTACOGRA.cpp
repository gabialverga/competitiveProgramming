#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i,n,t,v,x=0;
    cin>>n;
    for(i=0;i<n;i++){
      cin>>t>>v;
      x=(t*v)+x;
      }
      cout<<x;
    return 0;
}

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
     int l,p,a,r;
    cin>>l>>a>>p>>r;
    if((r*r)>=((l/2)*(l/2))+((p/2)*(p/2)) && (r*r)>=((l/2)*(l/2))+((a/2)*(a/2))) 
    cout<<"S"; 
    else
    cout<<"N";
    return 0;
}

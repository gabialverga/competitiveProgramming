#include <iostream>

using namespace std;

int main()
{
    int n,s,r,ax;
    cin>>n>>s;
    ax=s;
    for(int i=0;i<n;i++){
        cin>>r;
        s+=r;
        if(ax>s) ax=s;
    }
    cout<<ax;
    return 0;
}

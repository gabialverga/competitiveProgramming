#include <iostream>

using namespace std;

int main()
{
    int x1,x2,y1,y2,r=0;
    cin>>x1>>y1>>x2>>y2;
    if(x1>x2) r=x1-x2;
    else r=x2-x1;
    if(y1>y2) r+=y1-y2;
    else r+=y2-y1;
    cout<<r;
    return 0;
}


#include <iostream>

using namespace std;

int main()
{
    float a,g,ra,rg;
    cin>>a>>g>>ra>>rg;
    if((ra/a)>(rg/g)){
        cout<<"A";
    }
    else{
        cout<<"G";
    }
    return 0;
}
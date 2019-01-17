#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    a=a/2;
    b=b/3;
    c=c/5;
    if(a<b && a<c)
        cout<<a;
    else if(b<c)
        cout<<b;
    else
        cout<<c;
    return 0;
}

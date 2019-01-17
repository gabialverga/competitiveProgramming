#include <iostream>

using namespace std;

int main(){
    int p,r;
    cin>>p>>r;
    if(p==0) cout<<"C";
    else if(p==1 && r==1) cout<<"A";
    else if(p==1 && r==0) cout<<"B";
    return 0;
}

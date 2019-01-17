#include <iostream>

using namespace std;

int main(){
    long long int r,g,b;
    cin>>r>>g>>b;
    if(r%3==2 && g%3==2 && b!=0|| r%3==2 && b%3==2 && g!=0|| g%3==2 && b%3==2 && r!=0){
        cout<<2+(r-2)/3+(g-2)/3+(b-2)/3<<endl;
    }else{
        cout<<r/3+g/3+b/3+min(r%3,min(g%3,b%3))<<endl;
    }
    return 0;
}
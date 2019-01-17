#include <iostream>

using namespace std;

int main()
{
    int cv,ce,cs,fv,fe,fs;
    cin>>cv>>ce>>cs>>fv>>fe>>fs;
    if(cv*3+ce>fv*3+fe)
        cout<<"C";
    else if(cv*3+ce<fv*3+fe)
        cout<<"F";
    else if(cs>fs)
        cout<<"C";
    else if(cs<fs)
        cout<<"F";
    else
        cout<<"=";
    return 0;
}

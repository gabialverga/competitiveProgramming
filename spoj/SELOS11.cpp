#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long n,i;
    cin>>n;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"S";
            return 0;
        }
    }
    cout<<"N";
    return 0;
}


#include <iostream>

using namespace std;

int main()
{
    int n;
    float res=0,numero;
    char c;
    cin>>n>>numero>>c;
            if(c=='*'){
                res=numero*1;
            }
            if(c=='/'){
                res=1/numero;
            }
    for(int i=0;i<n-1;i++){
            cin>>numero>>c;
            if(c=='*'){
                res=numero*res;
            }
            if(c=='/'){
                res=res/numero;
            }
    }
    cout<<res;
    return 0;
}

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int r,a,b,c=1,ca=0,cb=0;
    while(true){
        cin>>r;
        if(r==0) break;
        for(int i=0;i<r;i++){
            cin>>a>>b;
            ca+=a;
            cb+=b;
        }
        cout<<"Teste "<<c<<endl;
        if(ca>cb) cout<<"Aldo"<<endl;
        else cout<<"Beto"<<endl;
        cout<<endl;
        c++;
        cb=0;
        ca=0;
    }
    return 0;
}


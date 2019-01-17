#include <iostream>
#include <math.h>
#define a 100
using namespace std;

int main(){
    int n,j,z,vj=0,vz=0,c=1,v[a];
    while(true){
        cin>>n;
        if(n==0) break;
        for(int i=0;i<n;i++){
            cin>>j>>z;
            vj+=j;
            vz+=z;
            v[i]=vj-vz;
        }
        cout<<"Teste "<<c<<endl;
        for(int i=0;i<n;i++){
            cout<<v[i]<<endl;
        }
        cout<<endl;
        c++;
        vj=0;
        vz=0;
    }
    return 0;
}

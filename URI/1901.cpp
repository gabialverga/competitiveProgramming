#include <iostream>
 
using namespace std;
int n,a,b,v[1010],m[201][201];
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>m[i][j];
        }
    }
    for(int i=0;i<2*n;i++){
        cin>>a>>b;
        v[m[a-1][b-1]]=1;
    }
    int resp=0;
    for(int i=0;i<1001;i++){
        if(v[i]==1) resp++;
    }
    cout<<resp<<endl;
    return 0;
}
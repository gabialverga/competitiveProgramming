#include <iostream>

using namespace std;

int main(){
    int a,b,n,v[100],c=1;
    string j1,j2;
    while(true){
        cin>>n;
        if(n==0) break;
        cin>>j1>>j2;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            if((a+b)%2==0) v[i]=1;
            else v[i]=2;

        }
        cout<<"Teste "<<c<<endl;
        for(int i=0;i<n;i++){
            if(v[i]==1) cout<<j1<<endl;
            else cout<<j2<<endl;
        }
        cout<<endl;
        c++;
    }
    return 0;
}

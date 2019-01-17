#include <iostream>
#define a 100
using namespace std;

int main()
{
    int n,v[a],r[a];
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>v[i];
    }
    if(n==1){
       cout<<v[0];
       return 0;
    }
    r[0]=v[0]+v[1];
    r[n-1]=v[n-1]+v[n-2];
    for(int i=1; i<n-1;i++){
        r[i]=v[i]+v[i-1]+v[i+1];
    }
    for(int i=0; i<n;i++){
        cout<<r[i]<<endl;
    }
    return 0;
}
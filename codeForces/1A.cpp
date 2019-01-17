#include <iostream>

using namespace std;

int main(){
    long long int a,b,c,r1,r2;
    cin>>a>>b>>c;
    if((a%c)!=0){
        r1=(a/c)+1;
    }else{
        r1=a/c;
    }
    if((b%c)!=0){
        r2=(b/c)+1;
    }else{
        r2=b/c;
    }
    cout<<r1*r2<<endl;
    return 0;
}
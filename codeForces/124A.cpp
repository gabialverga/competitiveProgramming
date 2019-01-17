#include <iostream>

 using namespace std;

 int main(){
    int n,a,b;
    cin>>n>>a>>b;
    for(int i=a+1;i<=n;i++){
        if(i>n-(b+1)){
            cout<<n-i+1<<endl;
            break;
        }
    }
    return 0;
 }
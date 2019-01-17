#include <iostream>

using namespace std;

int main(){
    int m=0,n;
    while(true){
      cin>>n;
      if(n==0) break;
      if(n>m) m=n;
    }
    cout<<m;
    return 0;
}
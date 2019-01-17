#include <iostream>
 
using namespace std;
 
int main(){
    int a,b;
    cin>>a>>b;
    if(a>b && b>=3 && b<=96){
        cout<<"minguante"<<endl;
    }else if(b>=0 && b<=2){
        cout<<"nova"<<endl;
    }else if(b>=3 && b<=96){
        cout<<"crescente"<<endl;
    }else if(b>=97 && b<=100){
        cout<<"cheia"<<endl;
    }
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int l1,l2,l3,l4;
    cin>>l1>>l2>>l3>>l4;
    if(l1+l2>l3&&l1+l3>l2&&l2+l3>l1){
        cout<<"S";
    }
    else if(l1+l2>l4&&l1+l4>l2&&l2+l4>l1){
        cout<<"S";
    }
    else if(l1+l3>l4&&l1+l4>l3&&l3+l4>l1){
        cout<<"S";
    }
    else if(l2+l3>l4&&l2+l4>l3&&l3+l4>l2){
        cout<<"S";
    }
    else
        cout<<"N";
    return 0;
}


#include <iostream>

using namespace std;

int main()
{
    long int n,ing,c=1;
    while(n!=0){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>ing;
            if(ing==i+1){
                cout<<"Teste "<<c<<endl<<ing<<endl<<endl;
            }
        }
        c++;
    }
    return 0;
}

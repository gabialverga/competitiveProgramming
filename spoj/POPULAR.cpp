#include <iostream>
#define a 100
using namespace std;

int main()
{
    int n,v[a][a],ve[a],s=0,z=0;
    while(true){
        cin>>n;
        if (n==0)
            return 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                s+=v[j][i];
            }
            ve[i]=s;
            s=0;
            if(ve[i]>z)
                z=ve[i];
        }
        cout<<z<<endl;
        z=0;
    }
    return 0;
}

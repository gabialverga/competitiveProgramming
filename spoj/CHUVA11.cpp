#include <iostream>
#define x 100
using namespace std;

int main()
{
    int m1[x][x],m2[x][x],n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>m1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>m2[i][j];
            m1[i][j]=m2[i][j]+m1[i][j];            
            cout<<m1[i][j]<<endl;
        }
    }
    return 0;
}
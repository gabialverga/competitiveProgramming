#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int c=0,n,i;
    char a;
    cin>>n;
    for(i=0;i<n;i++){
     cin>>a;
     switch(a){
      case 'P':
        c=c+2;
        break;
      case 'C':
        c=c+2;
        break;
      case 'A':
        c=c+1;
        break;
      case 'D':
        c=c+0;
        break;  
        }
     }
     cout<<c;
    return 0;
}


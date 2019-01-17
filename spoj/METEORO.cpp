#include <iostream>

using namespace std;

int main(){
    int n,x1,x2,y1,y2,x,y,cont=0,t=1;
    while(true){
        cin>>x1>>y1>>x2>>y2;
        if(x1==0 && x2==0 && y1==0 && y2==0) break;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            if(((x1<=x && x<=x2)||(x2<=x && x<=x1))&& ((y2<=y && y<=y1)||(y1<=y && y<=y2))) cont++;
        }
        cout<<"Teste "<<t<<endl<<cont<<endl<<endl;
        t++;
        cont=0;
    }
    return 0;
}


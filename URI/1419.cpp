#include <iostream>
#include <stdio.h>
   
using namespace std;
   
int main(){
    int r,pm,pl,m[11],l[11];
    while(true){
        pm = pl = 0;
        cin>>r;
        if (r==0) return 0;
        for(int i=0;i<r;i++){
            cin>>m[i];
            pm+=m[i];
        }
        for(int i=0;i<r;i++){
            cin>>l[i];
            pl+=l[i];
        }
        bool ok=true;
        for(int i =0;i<r-2 && ok;i++){
            if(m[i]==m[i+1] && m[i]==m[i+2] && l[i]==l[i+1] && l[i]==l[i+2] && ok){
                ok = false;
            }else if(m[i]==m[i+1] && m[i]==m[i+2] && ok){
                pm+=30;
                ok = false;
            }else if(l[i]==l[i+1] && l[i]==l[i+2] && ok){
                pl+=30;
                ok = false;
            }
        }
        if(pm>pl) printf("M\n");
        else if(pm<pl) printf("L\n");
        else printf("T\n");
    }
    return 0;
}
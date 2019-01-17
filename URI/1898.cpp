#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
  
using namespace std;
  
string a,va,vb,b,cpf;   
  
int main(){
    cin>>a>>b;
    int i;
    for(i=0;(i<a.size() && cpf.size()<11);i++){
        if(a[i]>='0' && a[i]<='9'){
            cpf+=a[i];
        }
    }
    bool ponto=false;
    int ok=0;
    for(;(i<a.size() && ok<2);i++){   
        if(a[i]=='.'){
            va+=a[i];
            ponto = true;
        }else if(a[i]>='0' && a[i]<='9' && !ponto){
            va+=a[i];
        }else if(a[i]>='0' && a[i]<='9'){
			va+=a[i];
			ok++;
		}
    }
    ponto = false;
    ok = 0;
    for(int j = 0;(j<b.size() && ok<2);j++){   
        if(b[j]=='.'){
            vb+=b[j];
            ponto = true;
        }else if(b[j]>='0' && b[j]<='9' && !ponto){
            vb+=b[j];
        }else if(b[j]>='0' && b[j]<='9'){
			vb+=b[j];
			ok++;
		}
    }
    cout<<"cpf "<<cpf<<endl;
    double resp =atof(va.c_str())+atof(vb.c_str());
    printf("%.2lf\n", resp);
    return 0;
}
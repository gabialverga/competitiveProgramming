#include<string.h>
#include <iostream>

using namespace std;

int main(){
int n;
cin>>n;
string a,b;
for(int i=0;i<n;i++){
  cin>>a>>b;
  if(b.size()>a.size()){
     cout<<"nao encaixa"<<endl;
  }else{
     bool ok = true;
     int k =0;
     for(int j = a.size()-b.size(); j<a.size(); j++){
           if(a[j]!=b[k]){
              ok = false;
              break;
           }
           k++;
     }
  if (!ok){
    cout<<"nao encaixa"<<endl;
  }else {
     cout<<"encaixa"<<endl;
  }
  }
}
return 0;
}

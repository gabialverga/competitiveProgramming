#include <iostream>
#include <string>

using namespace std;

int main(){
string n;
long int a,b;
bool parar=true;
while(cin>>n){
a=0,b=0;
parar=true;
for(int i=0;i<n.size();i++){
if(n[i]!='0')parar=false;
}
if(parar)break;
for(int i=n.size()-2;i>=0;i-=2){
b+=n[i]-'0';
}
for(int i=n.size()-1;i>=0;i-=2){
a+=n[i]-'0';
}
if((a-b)%11==0){
cout<<n<<" is a multiple of 11.\n";
}
else {
cout<<n<<" is not a multiple of 11.\n";
}
}
return 0;
}
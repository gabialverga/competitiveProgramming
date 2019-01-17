#include <iostream>

using namespace std;

int main(){
int n,x,s,c=1;
  while (true){
  	cin>>n;
  	if(n==0) break;
    s=0;
    for (int i=0; i < n; i++){
      cin>>x;
      s+=x;
    }
    cout<<"Teste "<<c<<endl<<s<<endl<<endl;
    c++;
  }
	return 0;
}
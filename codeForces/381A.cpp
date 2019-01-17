#include <iostream>

using namespace std;

int main(){
	int n,s,s2,v[1010],ini,fim,i=0;
	cin>>n;
	ini=0;
	fim=n-1;
	s=0;
	s2=0;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	while(ini<=fim){
		if(i%2==0){
			if(v[ini]>v[fim]){
				s+=v[ini];
				ini++;
			}else{
				s+=v[fim];
				fim--;
			}
		}else{
			if(v[ini]>v[fim]){
				s2+=v[ini];
				ini++;
			}else{
				s2+=v[fim];
				fim--;
			}
		}
		i++;
	}
	cout<<s<<" "<<s2<<endl;
	return 0;
}
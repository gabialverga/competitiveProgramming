#include <iostream>
#include <string.h>
#include <map>

using namespace std;

int main(){
	map<string,int> assassinos;
	string a,b;
	while(cin>>a>>b){
		if(assassinos.count(a)>0){
			if(assassinos[a]!=-1)
				assassinos.find(a)->second++;
		}else{
			assassinos[a]=1;
		}
		if(assassinos.count(b)>0){
			assassinos.find(b)->second=-1;
		}else{
			assassinos[b]=-1;
		}
	}
	cout<<"HALL OF MURDERERS"<<endl;
	map<string,int>::iterator i;
	for (i = assassinos.begin();i != assassinos.end();++i){
		if(i->second>0)
			cout<<i->first<<" "<<i->second<<endl;
	}
	return 0;
}
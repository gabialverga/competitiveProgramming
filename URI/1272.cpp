#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	string msg;
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++){
		getline(cin,msg);
		for(int j=0;j<msg.size();j++){
			if(j==0 && msg[j]!=' '){
				cout<<msg[j];
			} else if(msg[j-1]==' ' && msg[j]!=' '){
				cout<<msg[j];
			}
		}
		cout<<endl;
	}
	return 0;
}
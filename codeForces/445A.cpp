#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <string.h>
#include <queue>

using namespace std;

int main(){
	int a,b;
	char mat[110][110];
	cin>>a>>b;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin>>mat[i][j];
			if(mat[i][j]!='-'){
				if((i%2==0 && j%2==0)||(i%2==1 && j%2==1)){
					mat[i][j]='B';
				}else{
					mat[i][j]='W';
				}
			}
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout<<mat[i][j];
		}
		cout<<endl;
	}
	return 0;
}
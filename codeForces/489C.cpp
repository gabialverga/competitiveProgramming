#include <iostream>
#include <string.h>

using namespace std;

int v[110],v2[110];

int main(){
	int m,s;
	cin>>m>>s;
	
	if(9*m<s || (m>1 && s==0)){
		cout<<"-1 -1"<<endl;
	}else{
		v2[0]=1;
		int sa = s-1;
		for(int i=m-1;i>0;i--){
			if(sa>=9){
				sa-=9;
				v2[i] = 9;
			}else if(sa>=8){
				sa-=8;
				v2[i] = 8;
			}else if(sa>=7){
				sa-=7;
				v2[i] = 7;
			}else if(sa>=6){
				sa-=6;
				v2[i] = 6;
			}else if(sa>=5){
				sa-=5;
				v2[i] = 5;
			}else if(sa>=4){
				sa-=4;
				v2[i] = 4;
			}else if(sa>=3){
				sa-=3;
				v2[i] = 3;
			}else if(sa>=2){
				sa-=2;
				v2[i] = 2;
			}else if(sa>=1){
				sa-=1;
				v2[i] = 1;
			}
		}
		v2[0]+=sa;
		for(int i=0;i<m;i++){
			cout<<v2[i];
		}
		cout<<" ";

		//maior
		for(int i=0;i<m;i++){
			if(s>=9){
				s-=9;
				v[i] = 9;
			}else if(s>=8){
				s-=8;
				v[i] = 8;
			}else if(s>=7){
				s-=7;
				v[i] = 7;
			}else if(s>=6){
				s-=6;
				v[i] = 6;
			}else if(s>=5){
				s-=5;
				v[i] = 5;
			}else if(s>=4){
				s-=4;
				v[i] = 4;
			}else if(s>=3){
				s-=3;
				v[i] = 3;
			}else if(s>=2){
				s-=2;
				v[i] = 2;
			}else if(s>=1){
				s-=1;
				v[i] = 1;
			}
		}
		for(int i=0;i<m;i++){
			cout<<v[i];
		}
		cout<<endl;
	}
	return 0;
}
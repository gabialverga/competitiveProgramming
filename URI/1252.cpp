#include <iostream> 
#include <algorithm> 

using namespace std;

int x;

bool compare(long int a,long int b){
	long int ma=a%x,mb=b%x;
	if(ma!=mb){
		return ma<mb;
	}else{
		if(a%2==0 && b%2!=0)
			return false;
		else if(a%2!=0 && b%2==0)
			return true;
		 else if(a%2!=0 && b%2!=0)
		 	return a>b;
		 else if(a%2==0 && b%2==0)
		 	return a<b;
	}
}

int main(){
	long int m,v[10001];
	while(true){
		cin>>m>>x;
		if(m==0 && x==0){
			cout<<m<<" "<<x<<endl;
			break;
		}
		for(long int i=0;i<m;i++){
			cin>>v[i];
		}
		sort(v,v+m,compare);
		cout<<m<<" "<<x<<endl;
		for(long int i=0;i<m;i++){
			cout<<v[i]<<endl;
		}
	}
	return 0;
}
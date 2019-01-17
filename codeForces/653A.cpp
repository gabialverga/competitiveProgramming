#include <iostream>
#include <cstdlib>

using namespace std;

int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}

bool t[1001];

int main(){
	int n,x,v[55];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		t[x-1]=1;
	}
	int t2=0;
	for(int i=0;i<1000;i++){
		if(t[i]){
			v[t2]=i+1;
			t2++;
		}
	}
	qsort(v,t2,sizeof(int),compare);
	for(int i=2;i<t2;i++){
		if(v[i-2]!=v[i-1] && v[i-2]!=v[i] && v[i-1]!=v[i] && v[i]-v[i-2]<=2){
			cout<<"YES"<<endl;
			return 0;			
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
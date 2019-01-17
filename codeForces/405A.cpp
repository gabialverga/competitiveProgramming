#include <iostream>
#include <cstdlib>
using namespace std;
int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}

int main(){
	int n,v[1001];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	qsort(v,n,sizeof(int),compare);
	cout<<v[0];
	for(int i=1;i<n;i++){
		cout<<" "<<v[i];
	}
	cout<<endl;
	return 0;
}
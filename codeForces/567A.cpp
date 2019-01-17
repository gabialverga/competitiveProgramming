#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
	int n,v[100001];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	cout<<abs(v[0]-v[1])<<" "<<abs(v[0]-v[n-1])<<endl;
	for(int i=1;i<n-1;i++){
		cout<<min(abs(v[i]-v[i-1]),abs(v[i]-v[i+1]));
		cout<<" "<<max(abs(v[i]-v[0]),abs(v[i]-v[n-1]))<<endl;		
	}
	cout<<abs(v[n-1]-v[n-2])<<" "<<abs(v[0]-v[n-1])<<endl;
	return 0;
}
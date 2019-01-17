#include <iostream>

using namespace std;
int n,da,aa,ba,d[10001],a[10001],b[10001];
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>d[i]>>a[i]>>b[i];
	}
	cin>>da>>aa>>ba;
	float x;
	bool ok;
	for(int i=aa;i<=ba;i++){
		ok=true;
		for(int j=0;j<n;j++){
			x = (d[j]*i)/da;
			if(x< a[j] || x>b[j]){
				ok=false;
			}
		}
		if(ok){
			cout<<"Y"<<endl;
			return 0;
		}
	}
	cout<<"N"<<endl;
	return 0;
}
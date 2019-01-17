#include <iostream>

using namespace std;

int busca(long int v[],int t,int m,int quant){
	int b,i=0,f=m,s,res;
	while(i<=f){
		s=0;
		b=(f+i)/2;
		for(int a=0;a<t;a++){
			s+=v[a]/b;
		}
		if(s>=quant){
			   i=b+1;
				res=b;
		}
		else{
			f=b-1;
		}
	}
	return res;
}

int main(){
	long int v[10001],n,ma=0,x;
	cin>>x>>n;
	for(int i=0;i<n;i++){
		cin>>v[i];
		if(v[i]>ma) ma=v[i];
	}
	cout<<busca(v,n,ma,x);
	return 0;
}


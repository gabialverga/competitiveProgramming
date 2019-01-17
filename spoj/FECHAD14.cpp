#include <iostream>
 
 using namespace std;
 
 int main(){
	 int m,n,v[1001];
	 cin>>n>>m;
	 for(int i=0;i<n;i++){
		 cin>>v[i];
	 }
	 int cont=0,t;
	 for(int i=0;i<n-1;i++){
	 	if(v[i]>m){
	 		t=v[i]-m;
			 cont+=v[i]-m;
			 v[i]-=t;
			 v[i+1]-=t;
		 }else if(v[i]<m){
			 t=m-v[i];
			 cont+=m-v[i];
			 v[i]+=t;
			 v[i+1]+=t;
		 }
		 
	 }
	if(v[n-1]>m){
		 cont+=v[n-1]-m;
	 }else if(v[n-1]<m){
		 cont+=m-v[n-1];
	 }
	 cout<<cont<<endl;
	 return 0;
 }

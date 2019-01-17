#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int n,v[1001],k=1,m;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>v[i];
		}
        
        for(int i=0;i<n;i++){
			int s=0;
    		for(int j=0;j<i;j++){
	        	s+=v[j];
			}
			m=0;
	    	if(s==v[i] && m!=1){
				cout<<"Instancia "<<k++<<endl;
				cout<<v[i]<<endl<<endl;
				m=1;
				break;	
			}
		}
		
        if(m==0){
			cout<<"Instancia "<<k++<<endl;
			cout<<"nao achei"<<endl<<endl;
		}
    }
    return 0;
}

#include <iostream>
#include <math.h>

using namespace std;

int mdc(int a,int b){
	while(a!=b){
    	if(a>b)
    		a=a-b;
    	else
    		b=b-a;
	}
        return (a*b)/a;
}

int main(){
	int a,b,c;
	while(cin>>a>>b>>c){
		if(mdc(mdc(a,b),c)==1 && (pow(a,2)==pow(b,2)+pow(c,2))){
			cout<<"tripla pitagorica primitiva"<<endl;
		}else if(mdc(mdc(a,b),c)==1 && (pow(b,2)==pow(a,2)+pow(c,2))){
			cout<<"tripla pitagorica primitiva"<<endl;
		}else if(mdc(mdc(a,b),c)==1 && (pow(c,2)==pow(b,2)+pow(a,2))){
			cout<<"tripla pitagorica primitiva"<<endl;
		}else{
			if(a>b && a>c && (pow(a,2)==pow(b,2)+pow(c,2)) ){
				cout<<"tripla pitagorica"<<endl;
			}else if(b>c && (pow(b,2)==pow(a,2)+pow(c,2))){
				cout<<"tripla pitagorica"<<endl;
			}else if(pow(c,2)==pow(a,2)+pow(b,2)){
				cout<<"tripla pitagorica"<<endl;
			}else{
				cout<<"tripla"<<endl;
			}
		}
	}
	return 0;
}
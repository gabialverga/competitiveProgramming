#include <iostream>
#include <math.h>

using namespace std;

bool is_prime(int n){
	if(n%2==0 && n!=2) return false;
	for(int i =3;i<sqrt(n)+1;i+=2){
		if(n%i==0) return false;
	}
	return true;
}

int main(){
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(is_prime(x)) cout<<"Prime"<<endl;
        else cout<<"Not Prime"<<endl;
    }
    return 0;
}
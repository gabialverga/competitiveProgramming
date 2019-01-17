#include <iostream>
#include <fstream>
#include <bitset> 
#include <vector>
#include <cmath>
#include <cstdlib>

#define MAX 1000001

using namespace std;

int main(){
    bitset<MAX> bs;
    long long int limite;
    bs.reset();
    bs.flip();
    limite = (long long int)sqrt(MAX);
    bs.set((size_t)0, false);
	bs.set((size_t)1, false);
    for (long long int i = 2; i <= limite; i++){
        if (bs.test((size_t)i)){
        	for (long long int j = i * i; j < MAX; j += i){
				bs.set((size_t)j, false); 
			}	
        }
    }
	long long int n,x,raiz;
	bool ok;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		ok = false;
		raiz = int(sqrt(x));
		if(raiz*raiz == x && bs.test((size_t)raiz)) ok = true;
		if(ok) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
    return 0;
}
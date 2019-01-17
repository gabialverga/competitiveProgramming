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
    vector<long long int> primos;
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
	for(int i = 2; i < MAX; i++){
		if (bs.test((size_t)i)){
			primos.push_back(i);
		}
    }
    vector<long long int> soma;
    soma.push_back(0);
	soma.push_back(0);
	for(int i = 2; i < MAX-2; i++){
		soma.push_back(soma[i-1]);
		if((bs.test((size_t)i) && bs.test((size_t)i+2))||(bs.test((size_t)i) && bs.test((size_t)i-2))){
			soma[i]++;
		}
    }
    soma.push_back(soma[MAX-3]);
	soma.push_back(soma[MAX-3]);
    long long int a,b,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        cout<<soma[max(a,b)]-soma[min(a,b)-1]<<endl;
    }
    return 0;
}

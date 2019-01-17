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
	
  long long int n=0,i=0,resp=1;
  cin>>n;
  while(n>1 && i<primos.size()){
    if(n%primos[i]==0){
      resp*=primos[i];
      while(n%primos[i]==0){
        n/=primos[i];
      }
    }
    i++;
  }
  cout<<resp*n<<endl;
	return 0;
}
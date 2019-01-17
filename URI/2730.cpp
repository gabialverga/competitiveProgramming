#include <bits/stdc++.h>
using namespace std;

bool primos[300];
void eratostenes(){
	for(int i=0; i<300; i++) primos[i] = true;
	primos[0] = false; primos[1] = false;
	for(int i=2; i<300; i++){
		if(primos[i]){
			for(int j=i*i; j<300; j++) primos[j] = false;
		}
	}
	return;
}

int mdc(int menor, int maior){
	if(menor == 0) return maior;
	if(menor == 1) return 1;
	return mdc(maior%menor, menor);
}

int main(){
	int n;
	while(cin >> n && n != 0){
		int l1[n], l2[n];
		set< pair<int, int> > quant;
		int cont = 0;
		for(int i=0; i<n; i++) cin >> l1[i];
		for(int i=0; i<n; i++) cin >> l2[i];
		for(int i=0; i<n; i++){
			for(int j = 0; j<n; j++){
				pair<int, int> x = make_pair(min(l1[i], l2[j]), max(l1[i], l2[j]));
				if(mdc(x.first, x.second) == 1){
					int y = quant.size();
					quant.insert(x);
					if(y != quant.size() && x.first == x.second) cont++;
				}
			}
		}
		cout << 2*quant.size() - cont << endl;
	}
	return 0;
}

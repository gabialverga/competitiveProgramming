#include <iostream>
#include <string.h>

using namespace std;

int main() {
	int m[35];
	int n,pac,val,p;
	while(true){
		cin >> pac;
		if(pac == 0) return 0; 
		cin >> n;
		memset(m,0,sizeof(int)*35);
		m[0] = 1;
		for(int j = 0; j < pac; j++){
			cin >> val >> p;
			for(int k = n; k >= p; k--){
				if(m[k-p] != 0){
					if(m[k] < m[k-p] + val){
						m[k] = m[k-p] + val;
						if(k == p) m[k]--;
					}
				}
			}
		}
		int resp=0;
		for(int i=1;i<=n;i++){
			if(m[i]>resp) resp = m[i];
		}
		cout<<resp<<" min.\n";
	}
	return 0;
}
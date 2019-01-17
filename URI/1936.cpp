#include <bits/stdc++.h>

using namespace std;

vector<int> fat;
	
int main() {
	int n;
	cin>>n;
	fat.push_back(1);
	int i=1;
	while((fat[i-1] * i) <= n){
		fat.push_back(fat[i-1] * i);
		i++;
	}
	int cont=0;
	for(int i=fat.size()-1;i>0;i--){
		while(n>=fat[i]){
			cont++;
			n-=fat[i];
		}
	}
	cout<<cont<<endl;
	return 0;
}
#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n,k,x;
	vector<int> v;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	int ant;
	int resp = 0;
	for(int i=0;i<n;i++){
		if(k>0){
			resp++;
			k--;
			ant = v[i];
		}else if(v[i]==ant){
			resp++;
		}
	}
	cout<<resp<<endl;
	return 0;
}
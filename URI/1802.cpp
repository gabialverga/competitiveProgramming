#include <iostream>
#include <cstdlib>
#include <deque>
#include <algorithm>

using namespace std;

int main(){
	int n,x,k;
	deque<int> v[5],c;
	for(int i=0;i<5;i++){
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>x;
			v[i].push_back(x);
		}
		sort(v[i].begin(),v[i].end());
		reverse(v[i].begin(),v[i].end());
	}
	cin>>k;
	int soma = 0;
		for(int j=0;j<v[0].size();j++){
			for(int k=0;k<v[1].size();k++){
				for(int l=0;l<v[2].size();l++){
					for(int m=0;m<v[3].size();m++){
						for(int n=0;n<v[4].size();n++){
								c.push_back(v[0][j]+v[1][k]+v[2][l]+v[3][m]+v[4][n]);
							
						}
					}
				}
			}
		}
	sort(c.begin(),c.end());
	
	reverse(c.begin(),c.end());
	for(int i=0;i<k;i++){
		soma+=c[i];
	}
	cout<<soma<<endl;
	return 0;
}
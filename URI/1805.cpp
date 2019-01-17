#include <iostream>
using namespace std;
int main(){
	long long int n, m;
	cin >> n >> m;
	cout << (m*(m+1))/2 - (n*(n+1))/2 + n << endl;
	return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	long long t1, t2, w;
	cin >> t1 >> t2 >> w;
	
	t1 *= 60;
	t2 *= 60;
	
	long long intervalo;
	intervalo  = t2 - t1;
	long long total;
	total = intervalo * intervalo;
	long long match;
	match = total - (intervalo - w) * (intervalo - w);
	
	long long m = __gcd(match,total);

	cout << match / m << "/" << total / m << endl;		

	return 0;
}
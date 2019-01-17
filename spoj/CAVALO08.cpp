#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int m, n, t, ans;
	cin>>m>>n;
	if (m > n) {
		t = m;
		m = n;
		n = t;
	}
	if (m >= 3) {
		ans = (m * n + 1) / 2;
	} else if (m == 2) {
		switch (n % 4) {
			case 0:
				ans = n;
				break;
			case 2:
				ans = n + 2;
				break;
			case 3:
				ans = n + 1;
				break;
		}
	} else {
		ans = n;
	}
	cout<<ans;
	return 0;
}


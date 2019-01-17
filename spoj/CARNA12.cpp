#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	double N[5];
	for (int i = 0; i < 5; i++) {
		scanf("%lf", &N[i]);
	}
	double min = 10.0, max = 5.0, soma = 0.0;
	for (int i = 0; i < 5; i++) {
		if (N[i] < min) {
			min = N[i];
		}
		if (N[i] > max) {
			max = N[i];
		}
		soma += N[i];
	}
	soma -= min;
	soma -= max;
	printf("%.1f\n", soma);
	return 0;
}

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int teste=1, n;
    while (scanf("%d", &n) == 1 && n != -1)
    printf("Teste %d\n%d\n\n", teste++, ((1 << n)+1)*((1 << n)+1));
    return 0;
}
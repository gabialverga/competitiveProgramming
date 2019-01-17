#include <iostream>
#include <stdio.h> 
using namespace std;

int main(){
	int n;
	while(scanf("%d", &n), n > 0)
		printf("f91(%d) = %d\n", n, n <= 100? 91: n-10); 
}
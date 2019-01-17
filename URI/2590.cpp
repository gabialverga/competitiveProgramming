#include <stdio.h>

int main(){
	long long int n,x,i;
    scanf("%lld",&n);
	int v[4] = {1,7,9,3};
	for(i=0;i<n;i++){
		scanf("%lld",&x);
		printf("%d\n",v[x%4]);
	}
    return 0;
}
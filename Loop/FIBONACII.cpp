#include <stdio.h>

int main(){
	int n, fn1 = 0, fn2 = 1;
	scanf("%d", &n);
	long long fn = fn1 + fn2;
	printf("0, 1");
	for(int i =1; i<=n-2; i++){
			fn = fn1 + fn2;
			printf(", %lld", fn);
			fn1 =fn2;
			fn2 = fn;
		}
	
}

#include <stdio.h>

int main(){
	int n, sum = 0;
	scanf("%d", &n);
	while(n>0){
		scanf("%d", &n);
		sum += n;
	}
	printf("%d", sum);
}

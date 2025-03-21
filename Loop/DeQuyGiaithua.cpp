#include <stdio.h>
long long giaithua(int n){
	if(n>0)
	return n*giaithua(n-1);
	else return 1;
}

int main(){
	int n; scanf("%d", &n);
	printf("%d! = %lld", n, giaithua(n));
}
// cach 2 :
//long long sum = 1;
//for(int i = n; i>0;i--){
//	sum = sum*i;
}//

#include <stdio.h>
#include <math.h>

int nt(int n){
	for(int i = 2; i<=sqrt(n);i++){
		if(n%i == 0) return 0;
	} return n>1;
}

void innt(int a, int b){
	for(int i = a+1; i<b; i++){
		if(nt(i)) printf("%d ", i);
	}
}
int main(){
	int a, b; scanf("%d%d", &a, &b);
	innt(a,b);
}

#include <stdio.h>

int main(){
	for(int i = 1;i<=10; i++){
		for(int j = 1; j <= 3; j++){
		 printf("%2d x %2d = %2d\t", j, i, i*j);
		}
		printf("\n");
	}printf("\n");
	for(int a = 1;a<=10; a++){
		for(int b = 4; b <= 6; b++){
		 printf("%2d x %2d = %2d\t", b, a, a*b);
		}
		printf("\n");
	} printf("\n");
	for(int t = 1;t<=10; t++){
		for(int v = 7; v <= 9; v++){
		 printf("%2d x %2d = %2d\t", v, t, t*v);
		}
		printf("\n");
	}
}

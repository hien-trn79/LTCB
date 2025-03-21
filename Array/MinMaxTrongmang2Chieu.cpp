#include <stdio.h>
//tim gai tri min va max cua mang 2 chieu duoc nhap vao

void nhap(int a[][50], int n, int m){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &a[i][j]);
		}
	}
}
void in(int a[][50], int n, int m){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
void MinMax(int a[][50], int n, int m){
	int min = 1e9, max = -1e9;
	for(int i = 0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i][j] <= min) min = a[i][j];
			if(a[i][j] >= max) max = a[i][j];
		}
	}
	printf("%d %d", min, max);
}
int main(){
	int n , m; scanf("%d%d", &n, &m);
	int a[50][50];
	nhap(a, n, m);
	in(a, n ,m);
	MinMax(a, n, m);
}

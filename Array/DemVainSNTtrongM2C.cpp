#include <stdio.h>
#include <math.h>
// dem va in ra cac so nguyen to trong mang 2 chieu
int nt(int n){
	for(int i = 2; i<= sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return n>1;
}

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

void kiemtra(int a[][50], int n, int m){
	int cnt =0;
	printf("So nguyen to: ");
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(nt(a[i][j])){
				cnt++;
				printf("%d ", a[i][j]);
			}
		}
	}
	printf("\n%d",cnt);
}
int main(){
	int n ,m, a[50][50];
	scanf("%d%d", &n, &m);
	nhap(a,n,m); 
	in(a, n, m);
	kiemtra(a, n, m);
}
	

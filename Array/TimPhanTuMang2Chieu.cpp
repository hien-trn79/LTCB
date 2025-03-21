#include <stdio.h>

void nhapmang(int a[][50], int n, int m){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &a[i][j]);
		}
	}
}
void inmang(int a[][50], int n, int m){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
void findX(int a[][50], int n, int m, int x){
	int cnt =0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i][j] == x){
				cnt++;
				printf("(%d, %d) ", i, j);
			}
		}
	}
	if(cnt > 0) printf("\n%d", cnt);
	else printf("0");
}
int main(){
	int a[50][50], n, m;
	scanf("%d%d", &n, &m);
	nhapmang(a, n, m);
	int x; scanf("%d", &x);
	inmang(a, n, m);
	findX(a, n, m, x);
}

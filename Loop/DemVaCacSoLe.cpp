#include <stdio.h>

void nhap(int a[], int n){
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
}
void in(int a[], int n){
	for(int i=0; i<n; i++) printf("%d ", a[i]);
		printf("\n");
}
void check(int a[], int n){
	int cnt = 0;
	for(int i=0; i<n; i++){
		if(a[i] % 2 == 1) {
			cnt++;
			printf("%d ", a[i]);
		}
	}
	printf("\n%d", cnt);
}
int main(){
	int n, a[1000];
	scanf("%d", &n);
	nhap(a,n);
	in(a, n);
	check(a,n);
}

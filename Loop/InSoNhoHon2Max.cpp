#include <stdio.h>

void nhap(int a[], int n){
	for(int i=0; i<n; i++) scanf("%d" , &a[i]);
}
void in(int a[], int n){
	for(int i=0; i<n; i++) printf("%d ", a[i]);
		printf("\n");
}
void kiemtra(int a[], int n){
	int max1 = -1e9 - 1, max2 = -1e9 -1;
	for(int i=0; i<n; i++){
		if(a[i] > max1){
			max2 = max1; 
			max1 = a[i];
		}
		else if(a[i] > max2) max2 = a[i];
	}
	for(int i=0; i<n; i++){
		if(a[i] < max2) printf("%d ", a[i]);
	}
}
int main(){
	int n, a[1000];
	scanf("%d", &n);
	nhap(a, n);
	in(a, n);
	kiemtra(a, n);
}

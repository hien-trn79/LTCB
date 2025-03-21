#include <stdio.h>

void nhap(int a[], int n){
	for(int i = 0; i<n; i++){
		scanf("%d", &a[i]);
	}
}
void in(int a[], int n){
	for(int i = 0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}
 void dem(int a[], int n){
	int cnt = 0;
	for(int i=0; i<n; i++){
		if(a[i] % 2 == 1){
			cnt++;
		}
	}
	printf("%d\n", cnt);
}
void xetLe(int a[], int n){
	for(int i = 0; i<n; i++){
		if(a[i] % 2 == 1) printf("%d ", a[i]);
	}
}

int main(){
	int n; scanf("%d",&n); int a[1000];
	nhap(a,n);
	in(a,n);
	dem(a,n);
	xetLe(a,n);
}


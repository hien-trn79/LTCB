#include <stdio.h>
void nhap(int a[], int n){
	for(int i = 0; i<n; i++){
		scanf("%d", &a[i]);
	}
}

void sapXep(int a[], int n){
	int t; 
	for(int i = 0; i<n-1; i++){
		for(int j = i+1; j<n; j++){
			if(a[i]>a[j]){
				t= a[i];
				a[i]= a[j];
				a[j]=t;
			}
		} 
	}
}
void in(int a[], int n){
	for(int i = 0; i<n; i++){
		printf("%d ", a[i]);
	} printf("\n");
}
int main(){
	int n; scanf("%d", &n);
	int a[1000];
	nhap(a,n);
	in(a,n);
	sapXep(a,n);
	in(a,n);
}

#include <stdio.h>
#include <math.h>

int nguyento(int n){
	if(n<2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0 ) return 0;
	}
	return n>1;
}
void nhap(int a[], int n){
	for(int i = 0; i<n; i++){
		scanf("%d", &a[i]);
	}
}
void inmang(int a[], int n){
	for(int i = 0; i<n; i++){
		printf("%d ", a[i]);
	} printf("\n");
}
void demnt(int a[],int n){
	int cnt = 0; 
	for(int i = 0; i<n; i++){
		if(nguyento(a[i])) cnt++;
	}
	printf("%d\n", cnt);
}
void innt(int a[], int n){
	for(int i = 0; i<n; i++){
		if(nguyento(a[i])) printf("%d ", a[i]);
	}
}
int main(){
	int n; scanf("%d", &n);
	int a[1000];
	nhap(a,n);
	inmang(a,n);
	demnt(a,n);
	innt(a,n);
}


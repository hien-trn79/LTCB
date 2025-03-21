#include <stdio.h>
void nhap(int *a[], int n){
	for(int i = 0; i<n; i++){
		scanf("%d", &a[i]);
	}
}
int isSort(int *a[], int n) {
	int dem = 0;
	for (int i = 0; i < n-1; i++)
	{
		if (*a[i + 1] <= *a[i]) dem++;
	}
	printf("%d", dem);
	if (dem == n - 1) return 1;
	else return 0;
}
void check(int *a[], int n){
	for(int i = 0; i<n; i++){
		if(isSort(*a[i], n)) printf("YES");
		else printf("NO");
	}
}
int main(){
	int *a[1000];
	int n; scanf("%d", &n);
	check(&a,n);
}

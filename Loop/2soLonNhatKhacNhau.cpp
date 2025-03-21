#include <stdio.h>
 // tim ra 2 so lon nhat va lon thu 2 trong mang, neu khong co so thu 2 in ra -1 cho so thu 2
 
void nhap(int a[], int n){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}
void inmang(int a[], int n){
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main(){
	int n , a[1000];
	scanf("%d", &n);
	nhap(a, n);
	inmang(a,n);
	int max1 = -1e9 -1, max2 = -1e9-1;
	for(int i=0; i<n; i++){
		if(a[i] > max1){
			max2 = max1; 
			max1 = a[i];
		}
		else if((a[i] > max2) && (a[i] != max1)) max2 = a[i];
		// de 2 max khac nhau
	}
	if(max2 = -1e9 - 1) max2 = -1;
	// neu khong tim duoc max 2 gan lai thanh -1
	printf("%d %d", max1, max2);
}

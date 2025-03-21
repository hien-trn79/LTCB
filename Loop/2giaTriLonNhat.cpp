#include <stdio.h>

//tim va in ra 2 lon thu nhat và so lon thu 2. Tim them so nho nhat va nho thu 2
// tim 2 gia tri lon nhat
void nhap(int a[], int n){
	for(int i=0; i<n; i++)
	scanf("%d", &a[i]);
}
int main(){
	int n; scanf("%d", &n);
	int a[1000];
	nhap(a, n);
	int max1=-1e9, max2 = -1e9;
	for(int i=0; i<n; i++){
		if(a[i] > max1){
			max2= max1;
			max1 = a[i];
		}
		else if(a[i] > max2) max2 = a[i];
	}
	printf("%d %d", max1, max2);
}

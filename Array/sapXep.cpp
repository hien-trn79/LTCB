#include <stdio.h>
void nhap(int a[], int n){
	for(int i = 0; i<n; i++){
		scanf("%d", &n);
	}
}
void swap(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}
// Ham sap xep tang
void sortArrTang(int a[], int n){
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i], a[j]);
            }
        }
}
int main(){
	int n; scanf("%d", &n);
	int a[1000];
	nhap(a,n);
	sortArrTang(a,n);
}



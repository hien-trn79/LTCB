// viet chuong trinh sap xep tang dan, giam dan cua ham cho truoc
// input: 7 3 1 9 16
// output: 1 3 7 9 16
#include <stdio.h>

void nhap(int a[], int n){
    for(int i=0;i<n; i++) scanf("%d", &a[i]);
}
void in(int a[], int n){
    for(int i=0; i<n; i++) printf("%d ", a[i]);
    printf("\n");
}

void issort(int a[], int n){ // tang dan
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(a[j] > a[i]){
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}
void find(int a[], int)
int main(){
    int n; scanf("%d", &n);
    int a[15];
    nhap(a, n);
    in(a, n);
    issort(a, n);
    in(a, n);
}

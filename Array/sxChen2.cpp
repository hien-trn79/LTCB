#include <stdio.h>
void nhap(int a[], int n) {
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
}
void sort(int a[], int n) {
    int key;
    for(int i=1; i<n; i++) {
        key = a[i];
        int j=i;
        while(j>0 && a[j-1]  >= key) {
            a[j] = a[j-1];
            j--;
        }
        a[j] = key;
    }
}
void in(int a[], int n) {
    for(int i=0; i<n; i++) printf("%d ", a[i]);
}
int main() {
    int n;
    scanf("%d", &n);
    int a[n]; nhap(a, n);
    sort(a, n);
    in(a, n);
}

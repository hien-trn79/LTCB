// nh?p , in và tìm v? trí c?a ph?n t? trong m?ng 2 chi?u
#include <stdio.h>

void nhapmang(int a[][50], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
}
void inmang(int a[][50], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void find(int a[][50], int x, int n, int m){ // v?i x là giá tr? c?n tìm
    int cnt=0; // d?m s? l?n xh
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] == x){
                cnt++;
                printf("(%d, %d) ", i, j);
            }
        }
    }
    if(cnt) printf("\n%d", cnt);
    else printf("0");
}
int main(){
    int a[40][50];
    int n,m; scanf("%d%d", &n, &m);
    nhapmang(a, n, m);
    int x; scanf("%d", &x);
    inmang(a,n, m);
    find(a, x, n, m);
} 

#include <stdio.h>
void nhap(int a[], int n){
	for(int i = 0; i<n; i++){
		scanf("%d", &a[i]);
	}
}

void sapXep(int a[], int n){
	int cnt = 0;
	for(int i = 0; i<n-1; i++){
		for(int j = i+1; j<n; j++){
			if(a[i]>a[j]){
				cnt++;
			}
		} 
	}
	printf("%d", cnt);
	if(cnt == (n-2)) printf("YES");
	else printf("NO");
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
}

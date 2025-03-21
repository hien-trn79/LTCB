#include <stdio.h>

void Insert(int x, int p, int A[], int *pn){
	for(int i = *pn -1; i >= p; i--){
		A[i + 1] = A[i];
	}
	A[p] = x;
	(*pn)++;
}
int main(){
int a[5];
a[0]=1;a[1]=5;a[2]=2;a[3]=0;
int n = 4;
int x,i,p;
x=100;
p=4;
Insert(x,p,a, &n);
for(i=0;i<=n-1;i++)
    printf("%d ",a[i]);
}

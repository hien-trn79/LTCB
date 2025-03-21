// tao 1 danh sach can bo nhan vien
#include <stdio.h>
#include <string.h>

typedef struct{
	char hoten[30];
	int lg, age;
	char adr[50];
}thongtin;
void xoa(char c[]){
	size_t len = strlen(c);
	if(c[len-1] == '\n')
	c[len-1] = '\0';
}
void nhap(thongtin a[], int n){
	for(int i=0; i<n; i++){
		printf("Ten nhan vien %d: ", i+1);
		fgets(a[i].hoten, 30, stdin);
		xoa(a[i].hoten);
		printf("\nLuong: "); scanf("%d", &a[i].lg);
		getchar();
		printf("\nTuoi: "); scanf("%d", &a[i].age);
		getchar();
		printf("\nDia chi: "); fgets(a[i].adr, 50, stdin);
		xoa(a[i].adr);
	}
}
void in(thongtin a[], int n){
	printf("| %3s | %30s | %10s | %10s | %40s |\n","STT","Ho va ten", "Luong", "Tuoi", "Dia chi");
	for(int i=0; i<n; i++){
		printf("| %3d | %30s | %10d | %10d | %40s |\n", i+1, a[i].hoten, a[i].lg, a[i].age, a[i].adr);
	}
}
int main(){
	int n ; scanf("%d", &n);
	getchar();
	thongtin ds[500];
	nhap(ds, n);
	in(ds, n);
}

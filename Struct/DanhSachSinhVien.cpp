// viet chuong trinh nhap vao ho ten va diem cau n hoc sinh. xep loai van hoa 
#include <stdio.h>
#include <string.h>

typedef struct{
	char hoten[40];
	float diem;
	char hk[10];
}ds;
void xoa(char c[]){
	size_t len = strlen(c);
	if(c[len-1]=='\n')
	c[len-1] = '\0';
}
void nhap(ds a[], int n ){
	for(int i=0; i<n; i++){
		printf("Ten Sinh vien %d: ", i+1);
		fgets(a[i].hoten, 40, stdin); xoa(a[i].hoten);
		printf("\nDiem cua sinh vien %d: ", i+1);
		scanf("%f", &a[i].diem);
		getchar();
		if(a[i].diem >= 9){
			strcpy(a[i].hk,"Gioi");
		} else if(a[i].diem < 9 && a[i].diem >=7){
			strcpy(a[i].hk , "Kha");
		}else if(a[i].diem <7 && a[i].diem >= 5){
			strcpy(a[i].hk ,"Trung Binh");
		} else{
			strcpy(a[i].hk, "Khong Dat");
		}
	}
}
void in(ds a[], int n){
	printf("%3s\t%25s\t%5s\t%10s\n", "STT", "Ho va ten", "Diem","Hanh kiem");
	for(int i=0; i<n; i++){
		printf("%3d\t%25s\t%5.2f\t%10s\n", i+1, a[i].hoten, a[i].diem, a[i].hk);
	}
}
int main(){
	int n; scanf("%d", &n);
	ds Ds[400];
	getchar();
	nhap(Ds, n);
	in(Ds, n);
}

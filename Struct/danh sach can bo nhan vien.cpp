//Tao danh sach can bo cong nhan vien
#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
void xoa(char c[]){
	size_t len = strlen(c);
	if(c[len-1] == '\n')
	c[len-1] = '\0';
}

struct List {
	char Hoten[40];
	int Luong;
	int Tuoi;
	char DChi[40];
};
void nhap(struct List danhsach[],int n){
	for (int i=0;i<n;i++){
		printf("Nhap Ho va Ten can bo cong nhan vien thu %d: ",i+1);
		fgets(danhsach[i].Hoten, 40 ,stdin);
		xoa(danhsach[i].Hoten);
		printf("Nhap Luong can bo cong nhan vien thu %d: ",i+1);
		scanf("%d",&danhsach[i].Luong);
		getchar();
		printf("Nhap Tuoi can bo cong nhan vien thu %d: ",i+1);
		scanf("%d",&danhsach[i].Tuoi);
		getchar();
		printf("Nhap Dia chi can bo cong nhan vien thu %d: ",i+1 );
		fgets(danhsach[i].DChi, 40, stdin);
		xoa(danhsach[i].DChi);
	}
} 
void in(struct List danhsach[],int n){
	printf("\tCAN BO CONG NHAN VIEN\t\n"); 
//	printf("STT\t|\tHO VA TEN\t|\tLUONG\t|\tTUOI\t|\tDIA CHI\t|\n");
	printf("%3s\t%20s\t%10s\t%6s\t%15s\n", "STT", "HO VA TEN", "LUONG", "TUOI", "DIA CHI");
	for (int i=0;i<n;i++){
		printf("%3d\t%20s\t%10d\t%6d\t%15s\n",i+1,danhsach[i].Hoten,danhsach[i].Luong,danhsach[i].Tuoi,danhsach[i].DChi);
	} 
} 
int main (){
	struct List danhsach[500];
	int n;
	scanf ("%d",&n);
	getchar();
	nhap(danhsach,n);
	in(danhsach,n);
}


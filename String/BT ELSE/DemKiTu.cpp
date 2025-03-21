#include <stdio.h>
#include <string.h>

void xoa(char c[]){ // xoa xuong dong
	size_t len = strlen(c);
	if(c[len-1] == '\n')
		c[len-1] = '\0';
}
void nhapin(char c[]){ // nhap chuoi
	fgets(c, 500, stdin);
	xoa(c);
}
int is_alpha(char c){ // kiem tra chu cai?
	if((c>='a' && c<='z') || (c>='A' && c<='Z')) return 1;
	return 0;
}
int is_digit(char c){ // kiem tra ki tu la so
	if(c>='0' && c<='9') return 1;
	return 0;
}
// ham dem so luong chu cai, so va ki tu dac biet
void demChuCai(char c[]){
	int cnt = 0, dg=0; // khai bao bien dem
	for(int i=0; i<strlen(c); i++){
		if(is_alpha(c[i])) cnt++; // neu la chu cai thi cnt tang len 1
		else if(is_digit(c[i])) dg++; // neu la so thi tang dg len 1
	}
	printf("%d %d %d", cnt, dg, strlen(c) - (cnt+dg)); // in ra cai so luong
}
int main(){
	char c[500];
	nhapin(c);
	demChuCai(c);
}

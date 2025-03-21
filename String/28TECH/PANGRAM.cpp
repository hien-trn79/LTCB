//XAU PANGRAM CO NGHIA LA 1 XAU CHUA CAC KI TU IN THUONG TU A-Z XUAT HIEN IT NHAT 1 LAN
#include <stdio.h>
#include <string.h>

void xoa(char c[]){
	size_t len = strlen(c);
	if(c[len-1] == '\n'){
		c[len-1] = '\0';
	}
}
void nhapin(char c[]){
	fgets(c, 500, stdin);
	xoa(c);
	printf("%s\n", c);
}
int pangram(char c[]){ // kiem tra xau pangram
	int bang[26] = {0}; // tao 1 bang de dem ki tu xuat hien
	for(int i=0; i<strlen(c); i++){ // duyet chuoi
		bang[c[i] - 'a']=1; // chuoi in thuong gan ve gia tri i
	}
	for(int i=0; i<26; i++){ // kiem tra bang chu cai in thuong
		if(bang[i] == 0) return 0; // neu co 1 chu cai chua xuat hien thi no KO phai xau pangram
	}
	return 1; // nguoc lai thi tra ve 1
}
int main(){
	char c[500];
	nhapin(c);
	if(pangram(c)) printf("YES");
	else printf("NO");
}

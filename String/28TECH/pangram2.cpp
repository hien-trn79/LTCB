// xau pangram 2 khong phan biet hoa hay thuong kiem tra 1 xau co phai xau pangram hay khong
#include <stdio.h>
#include <string.h>

void xoa(char c[]){
	size_t len = strlen(c);
	if(c[len-1] == '\n')
		c[len-1] = '\0';
}
void nhapin(char c[]){
	fgets(c, 500, stdin);
	xoa(c);
	printf("%s\n", c);
}
int tolower(char c){ // kiem ki tu in thuong
	if(c>='A' && c<= 'Z')
	c+=32;
	return c;
}
char* my_strlwr(char c[]){ // chuyen thanh chuoi in thuong
	for(int i=0; i<strlen(c); i++){
		if(c[i] >= 'A' && c[i] <= 'Z'){
			c[i] = tolower(c[i]);
		}
	}
	return c;
}
int pangram(char c[]){ // kiem tra xau pangram
	my_strlwr(c); // chuyen xau thanh cac ki tu in thuong
	int bang[26] = {0}; // tao bang
	for(int i=0; i<strlen(c); i++){ // duyet chuoi
		bang[c[i]-'a'] = 1;
	}
	for(int i=0; i<26; i++){
		if(bang[i] == 0) return 0; // kiem tra su xuat hien cua ki tu
	}
	return 1;
}
int main(){
	char c[500];
	nhapin(c);
	if(pangram(c)) printf("YES");
	else printf("NO");
}

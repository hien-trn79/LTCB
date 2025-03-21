#include <stdio.h>
#include <string.h>
 // chuyen cac ki tu trong xau thanh ki tu thuong
 
void xoa(char c[]){
	size_t len = strlen(c);
	if(c[len-1] == '\n')
		c[len-1] = '\0';
}
void nhapin(char c[]){
	fgets(c, 500, stdin);
	xoa(c);
}
char tolower(char c){
	if(c>='A' && c<='Z') c+=32;
	return c;
}
char* my_strlwr(char c[]){
	for(int i=0; i<strlen(c); i++){
		if(c[i] >= 'A' && c[i] <= 'Z'){
			c[i] += 32;
		}
	}
	return c;
}
int main(){
	char c[500];
	nhapin(c);
	for(int i=0; i<strlen(c); i++){
		c[i]= tolower(c[i]);
	}
	printf("%s", c);
	printf("\n%s", my_strlwr(c));
}

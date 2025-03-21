#include <stdio.h>
#include <string.h>

void xoa(char c[]){
	size_t len = strlen(c);
	if(c[len-1]=='\n'){
		c[len-1] = '\0';
	}
}
void nhap(char c[]){
	fgets(c, 500, stdin);
	xoa(c);
	printf("%s", c);
}
int alpha(char c){
	if((c>='a' && c<='z') || (c>='A' && c<='Z')) return 1;
	return 0;
}
int kiemtra(char c[]){
	int cnt=1;
	for(int i=0; i<strlen(c); i++){
		if(c[i] == ' '){
			if(c[i+1] != ' '&& alpha(c[i+2])) cnt++;
		}
	}
	return cnt;
}
int main(){
	char name[500];
	nhap(name);
	printf("\n%d", kiemtra(name));
}

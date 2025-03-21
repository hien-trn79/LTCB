#include <stdio.h>
#include <string.h>

void nhapin(char s[]){
	fgets(s, 500, stdin);
	if(s[strlen(s)-1] == '\n'){
		s[strlen(s)-1] = '\0';
	}
	printf("%s", s);
}

void kiemtra(char s[]){
	int cnt=1;
	for(int i=0; i<strlen(s); i++){
		if( s[i] == ' '){
		cnt++;
		printf("%c", s[i]);
		}
	}
	printf("\n%d", cnt);
}

int main(){
	char s[500];
	nhapin(s);
	kiemtra(s);
}

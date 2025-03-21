#include <stdio.h>
#include <string.h>

void xoa(char c[]){
	size_t len = strlen(c);
	if(c[len-1] == '\n'){
		c[len-1] = '\0';
	}
}
void nhap(char c[]){
	fgets(c, 500, stdin);
	xoa(c);
	printf("%s\n", c);
}
void Insert(char x, int p, char c[]){
	int n = strlen(c);
	for(int i = n; i>=p; i--){
		c[i+1] = c[i];
	}
	c[p] = x;
	n--;
}
int main(){
	char str[500];
fgets(str,500,stdin);
printf("%s",str);
Insert(' ', 3,str);
printf("%s",str);
}

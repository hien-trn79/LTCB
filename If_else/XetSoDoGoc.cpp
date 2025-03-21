#include <stdio.h>

int main(){
	int n; scanf("%d", &n);
	int k = n/360;
	if(n>=(360*k) && n <(90 + 360*k)) printf("1");
	else if(n>=(90+360*k)&& n<(180+360*k)) printf("2");
	else if(n>=(180+360*k)&& n<(270 + 360*k)) printf("3");
	else printf("4");
}

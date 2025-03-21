#include <stdio.h>
 //viet 1 cau truc re nhanh de sap xep thu tu tang dan cho a, b, c
 // neu a<b
 	// neu c>b thi a,b,c
 	//c>a && c<b thi a,c,b
 	// c, a, b
//a>b 
	// c> a thi b a c
	// c>b && c <a thi b c a
	// c b a
int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(a<b){
		if(c>b) printf("%d %d %d", a, b, c);
		else if(c>a) printf("%d %d %d", a, c, b);
		else printf("%d %d %d", c, a, b);
	}else{
		if(c>a) printf("%d %d %d", b, a, c);
		else if(c>b) printf("%d %d %d", b, c, a);
		else printf("%d %d %d", c, b, a);
	}
}

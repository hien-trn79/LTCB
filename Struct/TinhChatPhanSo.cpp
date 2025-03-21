// viet 1 chuong trinh thuc hien cac phep tinh cua 1 phan so
#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct{
	int t, m;
}ps;
int ucln(int a. int b){
	a = abs(a);
	b = abs(b);
	while(b!=0){
		int t = a%b;
		a=b;
		b=t;
	}
	return a;
}
void nhap(ps a){
	scanf("%d%d", a.t, a.m);
	return a;
}
void in(ps a){
	printf("%d/ %d\n", a.t, a.m);
}
void chuanhoa( ps* c){
	int u = ucln(c->t, c->m);
	c->t = c->t /u;
	c->m = c->m/u;
}
void add(ps a, ps b, ps *c){
	c->t = a.t*b.m + b.t*a.m;
	c->m = a.t*b.t;
	chuanhoa(&(*c));
}
void tru(ps a, ps b, ps* c){
	c->t = a.t*b.m - b.t*a.m;
	c->m = a.t*b.t;
	chuanhoa(&(*c));
}
void nhan(ps a, ps b, ps* c){
	c->t = a.t*b.t;
	c->m = a.m*b.m;
	chuanhoa(&(*c));
}
void chia(ps a, ps b, ps *c){
	c->t = a.t*b.m;
	c->m = a.m*b.t;
	chuanhoa(&(*c));
}
int main(){
	ps a; nhap(a);
	ps b; nhap(b);
	ps c;
	
}

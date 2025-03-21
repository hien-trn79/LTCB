#include <stdio.h>

void Insert(int x, int p, int a[], int *pn){
	//*pn la ham goi con tro pn
	for(int i = *pn - 1; i>=p; i--){ // vong lap tang vi tri cua mang
		a[i+1] = a[i]; //tang vi tri mang
	}
	a[p] = x; // gan gia tri cho vi tri can chen
	(*pn)++; // tang so luong cho mang
}

int main(){
}

#include <stdio.h>
#include <math.h>

int main(){
	int d,m,y, D;
	scanf("%d%d%d", &d, &m, &y);
	switch(m){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			D = 31;
		case 4: case 6: case 9: case 11:
			D = 30;
		default:
			if(((y%4 == 0)&&(y%100 != 0)) || (y%400 == 0))
				D = 29;
			else D = 28;
	}
	if(d<D) d++;
	else {
	d = 1; m++;
		if(m >12){
			m =1 ; y++;
		}
	}
	printf("%.2d/%.2d/%d", d,m,y);
}

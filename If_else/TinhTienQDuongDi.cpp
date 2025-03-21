#include <stdio.h>

int main(){
	float km; scanf("%f", &km);
	float tien;
	if(km<=0.5){
		tien = 11500;
		printf("%.2f km = %.2f VND", km, tien);
	} else if(km>0.5 && km <= 30){
		tien = 11500 + (km - 0.5)*14500;
		printf("%.2f km = %.2f VND", km, tien);
	} else {
		tien = 11500 + (30-0.5)*14500 + (km - 30)*11600;
		printf("%.2f km = %.2f VND", km, tien);
	}
}

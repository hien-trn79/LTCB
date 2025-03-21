#include <stdio.h>

int main(){
	int sc, sm;
	scanf("%d%d", &sc, &sm);
	int sd = sm - sc;
	int tien;
	if(sd>=0 && sd <= 50){
		tien = sd*1549;
		printf("%d Kwh: %d VND", sd, tien);
	}
	else if(sd > 50 && sd <= 100){
		tien = (50*1549 + (sd-50)*1600);
		printf("%d Kwh: %d VND", sd, tien);
	}
	else if(sd > 100 && sd <= 200){
		tien = (50*1549 + (50)*1600 + (sd - 100)*1858);
		printf("%d Kwh: %d VND", sd, tien);
	}
	else if(sd > 200 && sd <= 300){
		tien = (50*1549 + (50)*1600 + 100*1858 + (sd - 200)*2340);
		printf("%d Kwh: %d VND", sd, tien);
	}
	else if(sd > 300 && sd < 400){
		tien = (50*1549 + (50)*1600 + 100*1858 + (1000)*2340 + (sd-300)*2615);
		printf("%d Kwh: %d VND", sd, tien);
	}
	else {
		tien = 50*1549+50*1600+100*1858+100*2340+100*2615+(sd-400)*2701;
		printf("%d Kwh: %d VND", sd, tien);
	}
}

#include <stdio.h>
#include <math.h>

int ngto(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return 0;
	} return 1;
}
void checknt(int a, int b){
	for(int i = a; i <= b; i++){
		if(ngto(i)) printf("%d ", i);
	}
}

int main(){
	checknt(2, 50);
}

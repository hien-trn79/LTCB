#include <stdio.h>

int locate(int x, int A[], int n){
	if(n<=0) return 0;
	for(int i=0; i<n; i++){
		if(A[i] == x) return i;
	}
	return n;
}


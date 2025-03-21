#include <stdio.h>

int isPalindrome(int A[], int  n){
	for(int i = 0; i < n/2; i++){ // kiem tra cac gia tri ben trai
		if(A[i] != A[n-i-1]) return 0; 
		// gia tri kiem tra khac tra ve 0
	}
	return 1;
	// con lai la ve 1
}

int main(){
int A[]={-1,-3, -1, 5};
int n = sizeof(A)/sizeof(int);
printf("%d",isPalindrome(A,n));
}

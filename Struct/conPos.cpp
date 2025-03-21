#include <stdio.h>
#include <string.h>
#include <malloc.h>
// toi di hoc
// output = di di\0
void xoa(char c[]){
    size_t len = strlen(c);
    if(c[len-1] == '\n')
    c[len-1] = '\0';
}
void nhap(char c[]){
    fgets(c, 500, stdin);
    printf("%s", c);
}
// con tro xau con
// xaucon[];
char* xauCon(int vitri, int n, char c[]){ // tham so hinh thuc
    int cnt = 0; // bien cuc bo
    char* a = (char*)malloc(n*sizeof(char)); // cap phat dong 
    for(int i=vitri; i<vitri+n; i++){
        a[cnt] = c[i];
        cnt++;
    }
    return a;
}

int main(){
    char c[500];
    nhap(c);
    printf("%s", xauCon(4, 2, c));
}

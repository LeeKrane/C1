#include<stdio.h>

int main(void){
    int a[256] = {};
    int i;
    char c;

    while((c=getchar())!=EOF){
        a[c]++;
    }

    for(i=32; i<256; i++){
        if(a[i]!=0){
            printf("\n%c --> %d\n", i, a[i]);
        }
    }
    return 0;
}

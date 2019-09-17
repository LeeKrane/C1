#include<stdio.h>

void swapping(int f[], size_t n);

int main(void){
    int a[5] = {53,67,4,2,17};
    size_t n=5, i;

    for(i=0; i<n; i++){
        printf("%d  ", a[i]);
    }
    putchar('\n');

    swapping(a, n);

    for(i=0; i<n; i++){
        printf("%d  ", a[i]);
    }

    return 0;
}

void swapping(int f[], size_t n){
    int i2=0, max=f[0], h;
    size_t i;

    for(i=0; i<n; i++){
        if(f[i]>max){
            max=f[i];
            i2=i;
        }
    }
    if(f[n-1]<max){
        h=f[i2];
        f[i2]=f[n-1];
        f[n-1]=h;
    }
}

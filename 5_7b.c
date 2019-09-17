#include<stdio.h>

void swapping(int f[], size_t n);

int main(void){
    int a[10] = {53,67,4,2,17,33,88,37,29,75};
    size_t n=10, i;

    for(i=0; i<n; i++){
        printf("%d  ", a[i]);
    }
    putchar('\n');

    for(i=n; i>1; i--){
        swapping(a, i);
    }

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

#include<stdio.h>

void fuellen(int f[], size_t n);
void spannweite(int f[], size_t n);

int main(void){
    int a[100];

    fuellen(a, 100);
    spannweite(a, 100);

    return 0;
}

void fuellen(int f[], size_t n){
    size_t i;

    for(i=0; i<n; i++){
        f[i]=i*2+2;
    }
}

void spannweite(int f[], size_t n){
    int max=f[n-1], min=f[0], sw;
    size_t i;

    sw = max - min;

    for(i=0; i<n; i++){
        printf("%d ", f[i]);
    }
    printf("\n\nDie Spannweite betraegt --> %d\n\n", sw);
}

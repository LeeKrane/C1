#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void check(int f[], size_t n, int *max, int *min);

int main(void){
    int f[10], max=0, min=100;
    size_t n = sizeof(f)/sizeof(f[0]), i;

    srand((unsigned int)time(NULL));

    for(i=0; i<n; i++){
        f[i] = rand()%100;
        printf("%d  ", f[i]);
    }

    check(f,n,&max,&min);

    printf("\n\nMaximum --> %d\nMinimum --> %d\n\n", max, min);

    return 0;
}

void check(int f[], size_t n, int *max, int *min){
    size_t i;

    for(i=0; i<n; i++){
        if(f[i]>*max){
            *max = f[i];
        }
        if(f[i]<*min){
            *min = f[i];
        }
    }
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10

void copyarray(int *copy, int *original);
void sort(int *f);
void swap(int *p1, int *p2);

int main(void){
    int f[N][N];
    int copyf[N][N];
    size_t i, j;

    srand((unsigned int)time(NULL));

    printf("Array-Original:\n");

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            f[i][j] = rand()%10;
            printf("%d  ", f[i][j]);
        }
        putchar('\n');
    }
    printf("\n\n");

    for(i=0; i<N; i++){
        copyarray(copyf[i], f[i]);
    }
    for(i=0; i<N; i++){
        sort(copyf[i]);
    }

    printf("Array-Kopie sortiert:\n");

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            printf("%d  ", copyf[i][j]);
        }
        putchar('\n');
    }
    return 0;
}

void copyarray(int *copy, int *original){
    size_t i;
    for(i=0; i<N; i++){
        copy[i]=original[i];
    }
}

void sort(int f[]){
    size_t i, j;

    for(i = 1; i < N; i++) {
        for(j = 0; j < N - i; j++) {
            if(f[j] > f[j+1]) {
                swap(&f[j], &f[j+1]);
            }
        }
    }
}

void swap(int *p1, int *p2){
    int h;

    h = *p1;
    *p1 = *p2;
    *p2 = h;
}

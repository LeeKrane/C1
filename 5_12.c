#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void copyarray(int *copy, int *original, size_t n);
void sort(int f[], size_t n);
void swap(int *p1, int *p2);


int main(void){
    int f[10];
    int copyf[10];
    size_t n = sizeof(f)/sizeof(f[0]), i;

    srand((unsigned int)time(NULL));

    printf("Array-Original:\n");

    for(i=0; i<n; i++){
        f[i] = rand()%10;
        printf("%d  ", f[i]);
    }
    putchar('\n');
    putchar('\n');

    copyarray(copyf, f, n);
    sort(copyf, n);

    printf("Array-Kopie sortiert:\n");

    for(i=0; i<n; i++){
        printf("%d  ", copyf[i]);
    }
    printf("\n\nMinimum -> %d\nMaximum -> %d\n\n\n", copyf[0], copyf[n-1]);
    return 0;
}

void copyarray(int *copy, int *original, size_t n){
    size_t i;
    for(i=0; i<n; i++){
        copy[i]=original[i];
    }
}

void sort(int f[], size_t n){
    size_t i, j;

    for(i = 1; i < n; i++) {
        for(j = 0; j < n - i; j++) {
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

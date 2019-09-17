#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sort(double f[], size_t n);
void swapDoubles(double *p1, double *p2);

int main(void){
    double f[10];
    size_t i;
    size_t n = sizeof(f)/sizeof(f[0]);

    srand((unsigned int)time(NULL));

    for(i=0; i<n; i++){
        f[i] = rand()%10;
        printf("%.2lf  ", f[i]);
    }
    putchar('\n');

    sort(f,n);

    for(i=0; i<n; i++){
        printf("%.2lf  ", f[i]);
    }

    return 0;
}

void sort(double f[], size_t n){
    size_t i, j;

    for(i = 1; i < n; i++) {
        for(j = 0; j < n - i; j++) {
            if(f[j] > f[j+1]) {
                swapDoubles(&f[j], &f[j+1]);
            }
        }
    }
}

void swapDoubles(double *p1, double *p2){
    double h;

    h = *p1;
    *p1 = *p2;
    *p2 = h;
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(double *p1, double *p2);

int main(void){
    double f[10];
    size_t i, lauf;
    size_t n = sizeof(f)/sizeof(f[0]);

    srand((unsigned int)time(NULL));

    for(lauf=1; lauf <= 2; lauf++){
        printf("Durchlauf: %d\n", lauf);

        for(i=0; i<n; i++){
            f[i] = rand()%10;
            printf("%.2lf  ", f[i]);
        }
        putchar('\n');

        if(lauf==1){
            swap(&f[2], &f[4]);
        }else{
            swap(f+2, f+4);
        }

        for(i=0; i<n; i++){
            printf("%.2lf  ", f[i]);
        }
        putchar('\n');
        putchar('\n');
    }

    return 0;
}

void swap(double *p1, double *p2){
    double h;

    h = *p1;
    *p1 = *p2;
    *p2 = h;
}

#include<stdio.h>
#include<time.h>

void function(double f[], size_t n);

int main(void){
    double a[10];
    int i;

    for(i=0; i<10; i++){
        a[i]=i+0.5;
    }

    for(i=0; i<10; i++){
        printf("%.2lf ", a[i]);
    }
    putchar('\n');

    function(a, 10);

     for(i=0; i<10; i++){
        printf("%.2lf ", a[i]);
    }
    putchar('\n');

    return 0;
}

void function(double f[], size_t n){
    int i, j;
    double h;

    for(i=0, j=n-1; i<j; i++, j--){
        h=f[i];
        f[i]=f[j];
        f[j]=h;
    }


}

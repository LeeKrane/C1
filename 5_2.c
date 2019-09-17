#include<stdio.h>

void fuellen(double f[], size_t n);
void ausgabe(double f[], size_t n);
void erhoehen(double f[], size_t n, double wert);

int main(void){
    double a[100];

    fuellen(a, 100);
    ausgabe(a, 100);
    erhoehen(a, 90, 1.2);
    erhoehen(a+90, 10, 1.5);
    ausgabe(a, 100);

    return 0;
}

void fuellen(double f[], size_t n){
    int i;

    for(i=0; i<n; i++){
        f[i]=i+1;
    }
}

void ausgabe(double f[], size_t n){
    int i;

    for(i=0; i<n; i++){
        printf("%.2lf ", f[i]);
    }
    putchar('\n');
    putchar('\n');
}

void erhoehen(double f[], size_t n, double wert){
    int i;

    for(i=0; i<n; i++){
        f[i]+=wert;
    }
}

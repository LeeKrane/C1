#include<stdio.h>

int main(void){
    float a, b, c, eps, x, y;

    printf("Genauigkeit eingeben --> ");
    scanf("%f", &eps);

    printf("\nGeben Sie hier a, b und c im Format a,b,c ein --> ");
    scanf("%f,%f,%f", &a, &b, &c);

    x = a*a + b*b;
    y = c*c;

    if(fabs (x-y) < eps){
        printf("\nDie Zahlen %f, %f und %f bilden ein pythagoraeisches Zahlentripel!\n\n", a, b, c);
    }else{
        printf("\nDie Zahlen %f, %f und %f bilden kein pythagoraeisches Zahlentripel!\n\n", a, b, c);
    }
    return 0;
}

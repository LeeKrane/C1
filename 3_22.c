#include <stdio.h>

int main(void){
    double a, b, x;

    printf("Geben Sie eine Zahl fuer a ein: ");
    scanf("%lf",&a);

    printf("Geben Sie eine Zahl fuer b ein: ");
    scanf("%lf",&b);

    if (a == 0){
        printf("Das funktioniert nicht!");
    }else if(b == 0){
        printf("0 ist das Ergebnis fuer x.");
    }else{
        x = (-b/a);
        printf("x betraegt %lf", x);
    }
    return 0;
}

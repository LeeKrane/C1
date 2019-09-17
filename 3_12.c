#include<stdio.h>

int main(void) {

    double h, m, s;

    // Einlesen der Werte
    printf("Geben Sie hier die erste Zeitangabe an (Format 00:00:00) --> ");
    scanf("%lf:%lf:%lf", &h, &m, &s);

    // Ausgabe
    printf("%d", h>=0 && h<=23 && m>=0 && m<=59 && s>=0 && s<=59);

    return 0;
}

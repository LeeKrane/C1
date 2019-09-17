#include<stdio.h>

int main(void) {
    // Einlesen
    double y;
    int s, z0, z1, z2, z3, z4, z5, z6, z7, z8, z9;
    printf("Geben Sie hier Ihre 10 Stellige Sozialversicherungsnummer ein --> \n");
    scanf("%1d%1d%1d*%1d%1d%1d%1d%1d%1d", &z0, &z1, &z2, &z4, &z5, &z6, &z7, &z8, &z9);

    // Rechnungen
    s = 3*z0 + 7*z1 + 9*z2 + 5*z4 + 8*z5 + 4*z6 + 2*z7 + z8 + 6*z9;
    y = s%11;

    printf("Die Pruefziffer ist: %2.0lf", y);

    return 0;
}

#include<stdio.h>
#include<math.h>

int main(void) {
    double h, m, s;
    double H, M, S;
    double a, b, c, d, e;

    // Einlesen der Werte
    printf("Geben Sie hier die erste Zeitangabe an (Format 00:00:00) --> ");
    scanf("%lf:%lf:%lf", &h, &m, &s);

    printf("\nGeben Sie hier die zweite Zeitangabe an (Format 00:00:00) --> ");
    scanf("%lf:%lf:%lf", &H, &M, &S);

    // Berechnung
    a = (h*3600) + (m*60) + s;
    b = (H*3600) + (M*60) + S;
    c = a - b;                      // Zeitunterschied in sec
    d = (c/3600) - (c%3600);
    e = ;


    // Ausgabe
    printf("\nDer Zeitunterschied betraegt --> %g Stunden, %g Minuten und %g Sekunden !", );
    return 0;
}

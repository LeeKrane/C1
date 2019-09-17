#include<stdio.h>

int main(void) {
    // Einlesen
    int t, h, z, e;     // eingelesene Ziffern
    int zahl1, zahl2;   // berechnete Zahlen
    printf("Vierstellige Zahl --> ");
    scanf("%1d%1d%1d%1d", &t, &h, &z, &e);

    // Aus Ziffern Zahlen berechnen
    zahl1= t*1000 + h*100 + z*10 + e;
    zahl2= e*1000 + z*100 + h*10 + t;

    // Rechnung Ausgabe
    printf("\n%26d\n", zahl1);
    printf("%+26d\n", zahl2);
    printf("%26s\n", "=====");
    printf("%26d\n", zahl1+zahl2);

    return 0;
}

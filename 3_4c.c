#include<stdio.h>

int main(void) {
    // Einlesen
    int t, h, z, e;     // eingelesene Ziffern
    int zahl1, zahl2;   // berechnete Zahlen
    printf("Vierstellige Zahl --> ");
    scanf("%4d", &zahl1);

    // Aus Zahl Ziffern extrahieren
    t=zahl1/1000;
    h=zahl1/100%10;
    z=zahl1/10%10;
    e=zahl1%10;

    //Berechnung von zahl2
    zahl2=e*1000+z*100+h*10+t;

    // Rechnung Ausgabe
    printf("\n%26d\n", zahl1);
    printf("%+26d\n", zahl2);
    printf("%26s\n", "=====");
    printf("%26d\n", zahl1+zahl2);

    return 0;
}

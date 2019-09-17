#include<stdio.h>

int main(void) {
    // Einlesen
    int t, h, z, e;     // eingelesene Ziffern
    int zahl1, zahl2;   // berechnete Zahlen
    char ct, ch, cz, ce;    // eingelesene Zeichen

    // zahl1 einlesen
    printf("Vierstellige Zahl --> ");
    scanf("%1c%1c%1c%1c", &ct, &ch, &cz, &ce);

    // Aus Zahl Ziffern extrahieren
    t = ct - '0';
    h = ch - '0';
    z = cz - '0';
    e = ce - '0';

    //Berechnung von zahl1 und zahl2
    zahl1=t*1000+h*100+z*10+e;
    zahl2=e*1000+z*100+h*10+t;

    // Rechnung Ausgabe
    printf("\n%26d\n", zahl1);
    printf("%+26d\n", zahl2);
    printf("%26s\n", "=====");
    printf("%26d\n", zahl1+zahl2);

    return 0;
}

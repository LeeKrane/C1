#include<stdio.h>

int main(void) {

    // km1, km2 = Kilometer 1 & 2, Differenz
    // l1, l2, ld = Liter 1 & 2
    // bz, bp, bv, bpl = Benzinverbrauch/L, Benzinpreis, Benzinverbrauch/KM, Benzinpreis pro KM
    // eur = Benzinpreis
    int km1, km2, km3;
    double l1, l2, bz, bp, bv, bpl, eur;

    printf("\nGeben Sie hier den Preis der Benzinladung ein (Ohne Euro Zeichen) --> ");
    scanf("%lf", &eur);

    printf("\nGeben Sie hier die Anzahl der Liter der Benzinladung ein --> ");
    scanf("%lf", &l1);

    printf("\nGeben Sie hier an wie viele Liter Sie noch in Ihrem Benzintank haben --> ");
    scanf("%lf", &l2);

    printf("\nGeben Sie den Kilometerstand beim letzten Tankstopp ein --> ");
    scanf("%d", &km1);

    printf("\nGeben Sie den Kilometerstand beim heutigen Tankstopp ein --> ");
    scanf("%d", &km2);

    // Berechnung
    bz = l1 - l2;
    bp = l1 / eur;
    km3 = km2 - km1;
    bv = km3 / bz;
    bpl = bv / 100 * bp;

    // Ausgabe
    printf("\nKilometerstand beim letzten Tankstopp --> %d", km1);
    printf("\nKilometerstand beim heutigen Tankstopp --> %d", km2);
    printf("\nBenzinverbrauch in Liter --> %.2lf", bz);
    printf("\nBenzinpreis pro Liter in Euro --> %.2lf Euro", bp);
    printf("\n----------------------------------------------------------");
    printf("\nDurchschnittlicher Benzinverbrauch: %.2lf l / 100 km", bv);
    printf("\nDurchschnittliche Benzinkosten: %.2lf Euro / km", bpl);

    return 0;
}

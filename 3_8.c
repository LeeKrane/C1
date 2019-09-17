#include<stdio.h>

int main(void) {

    double az, nz, p, gg, us, us2, ergebnis;

    //Eingabe
    printf("\nGeben Sie hier den alten Zaehlerstand (kwH) an --> ");
    scanf("%lf", &az);
    printf("\nGeben Sie hier den neuen Zaehlerstand (kwH) an --> ");
    scanf("%lf", &nz);
    printf("\nGeben Sie hier die Grundgebuehr in Euro an --> ");
    scanf("%lf", &gg);
    printf("\nGeben Sie hier den Preis pro kwH in Euro an --> ");
    scanf("%lf", &p);
    printf("\nGeben Sie hier die Umsatzsteuer in Prozent an --> ");
    scanf("%lf", &us);

    //Berechnung
    ergebnis = ((nz-az)*p+gg)*(1+(us/100));
    us2 = ergebnis-((nz-az)*p+gg);

    //Ausgabe
    printf("\nAlter Zaehlerstand (kwH) --> %.0lf", az);
    printf("\nNeuer Zaehlerstand (kwH) --> %.0lf", nz);
    printf("\nGrundgebuehr in Euro --> %.2lf", gg);
    printf("\nPreis pro kwH in Euro --> %.4lf", p);
    printf("\nUst in %% --> %.0lf", us);
    printf("\n-------------------------------------------");
    printf("\nRechnungsbetrag inkl. UST EUR %.2lf, davon %.0lf Prozent Ust: %.2lf", ergebnis, us, us2);

    return 0;
}

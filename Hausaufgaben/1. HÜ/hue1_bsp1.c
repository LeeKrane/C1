#include<stdio.h>


int main()
{
    double k, zs, zinsen, zg, j, m, t, tage; // k = Kapital, zg = Zinsengesamt, zs = Zinssatz, j = Verzinsungsdauer Jahre , m = Verzinsungsdauer Monate, t = Verzinsungsdauer Tage,
    char ch = '%';

    printf("Kapital(in Euro) --> ");
    scanf("%lf", &k);
    printf("Zinssatz (in %c) --> ", ch);
    scanf("%lf", &zs);
    printf("Verzinsungsdauer Jahre --> ");
    scanf("%lf", &j);
    printf("Verzinsungsdauer Monate --> ");
    scanf("%lf", &m);
    printf("Verzinsungsdauer Tage --> ");
    scanf("%lf", &t);
//Berechnung
    tage = (j * 360) + (m * 30) + t;
    zinsen = (k*zs*tage)/36000;
    zg = zinsen + k;
// Ausgabe
    printf("%s\n", "---------------------------------------------");

    printf("Es ergeben sich Zinsen von %.2lf Euro\n", zinsen);
    printf("Wert des einfach verzinsten Gesamtkapitals: %.2lf", zg);

    return 0;


}


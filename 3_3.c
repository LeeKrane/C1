#include<stdio.h>
#include<math.h>

int main(void) {
    double a, b, c; // Seiten a, b und c
    double u, f; // Umfang und Flaeche

    // Einlesen der Sitnlaengen
    printf("Geben Sie hier Seitenlaenge a ein --> ");
    scanf("%lf",&a);
    printf("Geben Sie hier Seitenlaenge b ein --> ");
    scanf("%lf",&b);
    printf("Geben Sie hier Seitenlaenge c ein --> ");
    scanf("%lf",&c);

    // Berechnung
    u = a+b+c;
    f = (a*b)/2;

    //Ausgabe des Umfangs und der Flaeche
    printf("Der Umfang des Dreiecks betraegt --> %g\n",u);
    printf("Die Flaeche des Dreiecks betraegt --> %g\n",f);

    return 0;
}

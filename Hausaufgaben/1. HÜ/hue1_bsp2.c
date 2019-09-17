
//----------------------------------------------------------------------
//
//l.....Teststrecke
//h.....Stunden
//m.....Minuten
//s.....Sekunden
//s2 ...Sekunden umrechnen
//rs....Reststunden
//t2....Gesamtsekunden für 7500 Meter
//h2....umrechnen in Stunden
//m2....umrechnen in Minuten
//dv.....Durschnitsgeschwindigkeit
//t.....Stunden, Minuten und Sekunde in Sekunden
//z.....Strecke für 42195 Meter
//----------------------------------------------------------------------

#include <stdio.h>

int main()
{
    int l, h, m, s, s2, rs, t2, h2, m2;
    double dv, t;
    int z = 42195;

    //Eingaben
    printf("Laenge der Teststrecke in m -->");
    scanf("%d", &l);
    printf("Zeit fuer die Teststrecke:\n");
    printf("Stunden -->");
    scanf("%d", &h);
    printf("Minuten -->");
    scanf("%d", &m);
    printf("Sekunden -->");
    scanf("%d", &s);

    //Durchschnittsgeschwindigkeit berechnen
    t = h*3600+m*60+s;
    dv = (l/t)*3.6;
    t2 = (z/(dv/3.6));

    //Umwandeln
    h2 = t2/3600;
    rs = t2%3600;
    m2 = rs/60;
    s2 = rs%60;

    //Ausgaben

    printf("Die Durschnittsgeschwindigkeit ist %.2lf km/h\n", dv);
    printf("Geschaetzte Marathonzeit %d Stunden %d Minuten %d Sekunden", h2, m2, s2);
    return 0;


}

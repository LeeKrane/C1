#include<stdio.h>

int main(void)
{

    int t,m,j;       //eingeleseens Datum
    int ok;          // Rückgabewert
    char enter;      // Enter bei Eingabe
    int gesamt = 0;  // Gesamttageanzahl
    int max;         // max Tage im M

    printf("Bitte Datum eingeben (tt.mm.jjjj) ->");
    ok=scanf("%2d.%2d.%4d%c",&t,&m,&j,&enter);

//Eingabe Korrekt
    if(ok==4 && enter=='\n')
    {
        //Maximal Tage für eingelesenes Monats
        switch(m)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            max =31;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            max=30;
            break;

        case 2:
            if((j%4==0 && j%100!=0) || j%400==0)
            {
                max=29;
                break;
            }
            else
            {
                max=28;
                break;
            }
        }

        // Datum existiert
        if(t>=1 && t<=max && m>=1 && m<=12 && j>=1)
        {
            // printf("Datum existiert!");



        // Tage angebrochener Monat hinzufügen
        gesamt=t;

        // Tage Monate davor hinzufügen

        switch(m-1)
        {
        case 11:
            gesamt +=30;
        case 10:
            gesamt +=31;
        case 8:
            gesamt +=30;
        case 7:
            gesamt +=31;
        case 6:
            gesamt +=30;
        case 5:
            gesamt +=31;
        case 4:
            gesamt +=30;
        case 3:
            gesamt +=31;
        case 2:
            if((j%4==0 && j%100!=0) || j%400==0)
            {
                gesamt+=29;
            }
            else
            {
                gesamt+=28;
            }
        case 1:
            gesamt +=31;

        }

        printf("Vergangene Tage: %d", gesamt);



    }
        // Datum existiert nicht
        else
        {
            printf("Datum existiert nicht");
        }

    }
    else
    {
        printf("Eingabe war nicht korrekt!");
    }
    return 0;
}




























#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    int wert;       // Zufaellige Zahl

    srand(time(NULL));

    // Berechnung
    wert = rand()%100;

    // Ausgabe
    if(wert>=0 && wert<=24){
        printf("Der Wert liegt im ersten Viertel!\n\n");
    }else if(wert>=25 && wert<=49){
        printf("Der Wert liegt im zweiten Viertel!\n\n");
    }else if(wert>=50 && wert<=74){
        printf("Der Wert liegt im dritten Viertel!\n\n");
    }else{
        printf("Der Wert liegt im vierten Viertel!\n\n");
    }
    printf("Pruefzahl --> %d\n\n", wert);
    return 0;
}

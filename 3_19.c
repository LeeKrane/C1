#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
    int wert, z1, z2;

    srand(time(NULL));

    // Berechnung
    z1 = rand()%3+6;
    z2 = rand()%10;
    wert = (z1*10)+z2;

    // Ausgabe
    if(wert>=90){
        printf("\nIhre Note ist ein A");
        if(z2>=8){
            printf("+");
        }else if(z2<=1){
            printf("-");
        }
    }else if(wert>=80){
        printf("\nIhre Note ist ein B");
        if(z2>=8){
            printf("+");
        }else if(z2<=1){
            printf("-");
        }
    }else if(wert>=70){
        printf("\nIhre Note ist ein C");
        if(z2>=8){
            printf("+");
        }else if(z2<=1){
            printf("-");
        }
    }else{
        printf("\nIhre Note ist ein D");
        if(z2>=8){
            printf("+");
        }else if(z2<=1){
            printf("-");
        }
    }
    // Kontrollzahl
    printf("\n\nKontrollzahl = %d\n", wert);
    return 0;
}

#include<stdio.h>

int main55(void){
    int i;          // Hilfsvariable

    printf("Geben Sie hier an wie spaet es ist (in Stunden) --> ");
    scanf("%d", &i);

    switch(i){
        case 23:
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5: printf("\nGute Nacht\n");
        break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10: printf("\nGuten Morgen\n");
        break;
        case 11:
        case 12:
        case 13: printf("\nMahlzeit\n");
        break;
        case 14:
        case 15:
        case 16:
        case 17: printf("\nSchoenen Nachmittag\n");
        break;
        case 18:
        case 19:
        case 20:
        case 21:
        case 22: printf("\nGuten Abend\n");
        break;
        default: printf("\nfalscher Stundenwert\n");
    }
}

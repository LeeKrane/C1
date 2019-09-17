#include<stdio.h>

int main165(void){
    int i;          //Hilfsvariable

    printf("Geben Sie hier an wie spaet es ist (in Stunden) --> ");
    scanf("%d", &i);

    if(i==23 || (i>=0 && i<=5)){
        printf("\nGute Nacht\n");
    }else if(i>=6 && i<=10){
        printf("\nGuten Morgen\n");
    }else if(i>=11 && i<=13){
        printf("\nMahlzeit\n");
    }else if(i>=14 && i<=17){
        printf("\nSchoenen Nachmittag\n");
    }else if(i>=18 && i<=22){
        printf("\nGuten Abend\n");
    }else{
        printf("\nfalscher Stundenwert\n");
    }
}

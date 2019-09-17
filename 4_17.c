#include<stdio.h>

long midnight(long zeit, int *sec, int *min, int *h);

int main(void){
    long zeit=0;
    int sec=0, min=0, h=0, erg=0;
    char ch;

    printf("Geben Sie die Sekundenanzahl ein --> ");
    erg = scanf("%ld%c", &zeit, &ch);

    if(erg != 2 || ch != '\n'){ printf("Falsche Eingabe!"); }
    else{
        if(midnight(zeit, &sec, &min, &h)==1){
            printf("\nStunden: %d\nMinuten: %d\nSekunden: %d\n", h, min, sec);
            printf("\nUhrzeit: %02d:%02d:%02d\n", h, min, sec);
        }else{ printf("\nFalsche Eingabe!\n"); }
    }
    return 0;
}

long midnight(long zeit, int *sec, int *min, int *h){
    if(zeit < 0 || zeit > 86399){
        return 0;
    }else{
        *h = zeit/3600;
        *min = (zeit-(zeit/3600)*3600)/60;
        *sec = zeit%60;
        return 1;
    }
}

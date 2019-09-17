#include<stdio.h>

int main(void){
    int i;          //Hilfsvariable
    int h, z, e;    //Auszugebende Zahl in Ziffern
    int ZS, anz=0;    //Ziffernsumme, Anzahl der Zahlen

    for(i=100; i<=999; i++){
        h=i/100;
        z=i%100/10;
        e=i%10;
        ZS=h+z+e;

        if(ZS>25){
            printf("%d\n", i);
            anz++;
        }
    }
    printf("\nEs gibt %d Zahlen, deren Ziffernsumme ueber 25 ist\n", anz);
    return 0;
}

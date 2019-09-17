#include<stdio.h>

int ziffsum(long zahl);

int main(void){
    long i;
    int anz=0;

    for(i=10000; i<=99999; i++){
        if(ziffsum(i)==10){
            printf("%ld\n", i);
            anz+=1;
        }
    }
    printf("\n\nAnzahl an Ausgaben: %d\n", anz);
    return 0;
}

int ziffsum(long zahl){
    int sum=0;

    while(zahl>0){
        sum+=zahl%10;       // Einerstelle zur Summe zählen
        zahl/=10;           // Einerstelle wegschneiden
    }
    return sum;
}

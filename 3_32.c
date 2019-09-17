#include<stdio.h>

int main22(void){
    int Z1=2;           // Zahl
    int h, z, e;        // hunderterstelle, zehnerstelle, einerstelle
    int Z2;             // Ziffer Kubiert Addiert
    int h2, z2, e2;     // h, z, e kubiert

    for(Z1=2; Z1<=999; Z1++){
        h=Z1/100;
        z=Z1%100/10;
        e=Z1%10;

        h2=h*h*h;
        z2=z*z*z;
        e2=e*e*e;

        Z2=h2+z2+e2;

        if(Z1==Z2){
            printf("%d\n", Z2);
        }
    }
    return 0;
}

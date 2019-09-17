#include<stdio.h>
#include<math.h>

int ziff(int h, int z, int e);
int ziffsum(int h, int z, int e);

int main(void){
    int h=48, z=48, e=48, anz=0;        // Zahlenvariablen
    int h2=0, z2=0, e2=0;               // Ausgabevariablen

    while(h>=48 && h<=50){
        while(z>=48 && z<=57){
            while(e>=48 && e<=57){
                if((ziff(h, z, e))==1 || (ziffsum(h, z, e))==1){
                    if(h==48){ h2=32; }
                    else{ h2=42; }
                    if(z==48 && anz<10){ z2=32; }
                    else{ z2=42; }

                    printf("%c%c%c ", h2, z2, e2);
                    anz++;
                }else{
                    if(h==48){ h2=32; }
                    else{ h2=h; }
                    if(z==48 && anz<10){ z2=32; }
                    else{ z2=z; }

                    printf("%c%c%c ", h2, z2, e2);
                    anz++;
                }
                if(h<=50){
                    if(z<=57){
                        if(e<=57){ e++; }
                        else{ e-=9; z++; }
                    }else{ z-=9; h++; }
                }
            }
        }
    }
}

int ziff(int h, int z, int e){
    int zahl;

    zahl = ((h-48)*100) + ((z-48)*10) + (e-48);

    if((zahl/7)>=0 && (zahl/7)<=42){
        return 1;
    }else{ return 0; }
}

int ziffsum(int h, int z, int e){
    int zahl;

    zahl = (h-48) + (z-48) + (e-48);

    if(zahl==7){ return 1; }
    else{ return 0; }
}

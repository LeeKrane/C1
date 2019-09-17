#include<stdio.h>

int main(void){
    int anz, anz2=0;
    int zt, t, h, z, e;

    for(t=0; t<=8; t+=2){
        for(h=0; h<=8; h+=2){
            for(z=0; z<=8; z+=2){
                for(e=0; e<=8; e+=2){
                    anz = 0;
                    if(e==4){
                        anz++;
                    }
                    if(z==4){
                        anz++;
                    }
                    if(h==4){
                        anz++;
                    }
                    if(t==4){
                        anz++;
                    }
                    if(anz==2){
                        printf("%d", t);
                        printf("%d", h);
                        printf("%d", z);
                        printf("%d\n", e);
                        anz2++;
                    }
                }
            }
        }
    }

    printf("\nAnzahl an Moeglichkeiten --> %d\n", anz2);
    return 0;
}

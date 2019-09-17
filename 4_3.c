#include<stdio.h>

int dat(int d);

int main(void){
    int d;

    if(dat(d)==0){
        printf("\nDas Datum ist gueltig!\n");
    }else if(dat(d)==1){
        printf("\nDas Datum ist nicht gueltig!\n");
    }
}

int dat(int d){
    int t,m,j;       //eingeleseens Datum
    int max;         // max Tage im M

    printf("Bitte Datum eingeben (tt.mm.jjjj) ->");
    scanf("%2d.%2d.%4d", &t, &m, &j);

        switch(m){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            max =31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            max=30;
            break;
        case 2:
            if((j%4==0 && j%100!=0) || j%400==0){
                max=29;
                break;
            }else{
                max=28;
                break;
            }
        }

        // Datum existiert
        if(t>=1 && t<=max && m>=1 && m<=12 && j>=1){
            d = 0;
        }else{
            d = 1;
        }
        return d;
}

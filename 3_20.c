#include<stdio.h>

int main(void){
    int j, h;       // Jahr, Hilfsvariable

    printf("Geben Sie hier das Jahr ein --> ");
    scanf("%d", &j);

    h = j%400==0 || (j%4==0 && j%100!=0);

    if(h==1){
        printf("\n%d ist ein Schaltjahr!\n", j);
    }else{
        printf("\n%d ist kein Schaltjahr!\n", j);
    }
    return 0;
}

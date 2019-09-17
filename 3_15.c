#include<stdio.h>

int main(void) {
    int a=-20;
    int x=-5, y=15;
    int z=15;
    int jahr=2000;
    int aa=25, bb=10;
    char antwort='y';
    int zaehler=4;

    printf("a) %d\n", a>=-20 && a<=100);
    printf("b) %d\n", x<0 && y>=5 && y<=30);
    printf("c) %d\n", z%2==1 && z%3==0 && z%5==0);
    printf("d) %d\n", jahr%400==0 || (jahr%4==0 && jahr%100!=0));
    printf("e) %d\n", aa*bb<=255);
    printf("f) %d\n", antwort!='j' && antwort!='J');
    printf("g) %d\n", !(zaehler>=5 && zaehler<=25));

    return 0;
}

#include<stdio.h>

int einl(int);
double quad(int);
double ausg(int);

int main(void){
    int z=0;
    ausg(quad(einl(z)));
    return 0;
}

int einl(int z){
    int erg;
    char ch;
    int z1=0;

    printf("Zahl --> ");
    erg = scanf("%d%c", &z1, &ch);

    if(erg != 2 || ch != '\n'){
        printf("\nFalsche Eingabe!");
    }else{
        return z1;
    }
}

double quad(int z1){
    int z2=0;
    z2=z1*z1;
    return z2;
}

double ausg(int z2){
    printf("\n%d\n\n", z2);
}

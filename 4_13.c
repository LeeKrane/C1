#include<stdio.h>

int add(int z1, int z2);
int sub(int z1, int z2);
int mul(int z1, int z2);
int div(int z1, int z2);

int main(void){
    int z1, z2;
    int erg1, erg2;
    char ch;

    printf("Erste Zahl = ");
    erg1 = scanf("%d%c", &z1, &ch);
    printf("Zweite Zahl = ");
    erg2 = scanf("%d%c", &z2, &ch);

    if(erg1 != 2 || erg2 != 2 || ch != '\n'){
        printf("Falsche Eingabe!");
    }else{
        printf("\n%d + %d = %d", z1, z2, add(z1, z2));
        printf("\n%d - %d = %d", z1, z2, sub(z1, z2));
        printf("\n%d * %d = %d\n", z1, z2, mul(z1, z2));
        printf("\n%d / %d = %d\n\n\n\n", z1, z2, div(z1, z2));
    }
    return 0;
}

int add(int z1, int z2){
    int erg;

    erg = z1 + z2;
    return erg;
}

int sub(int z1, int z2){
    int erg;

    erg = z1 - z2;
    return erg;
}

int mul(int z1, int z2){
    int erg=0, i;

    for(i=z2; i>0; i--){
        erg+=z1;
    }
    return erg;
}

int div(int z1, int z2){
    int erg=0;
    int r=z1;

    while(r>z2){
        r-=z2;
        erg++;
    }
    if(r == z2){
        erg++;
        r=0;
    }
    printf("\nRest der Division = %d", r);
    return erg;
}

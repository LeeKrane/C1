#include<stdio.h>

int abs(long z);
int vor(long z);

int main(void){
    long z;
    int w;          // Qual der Wahl

    printf("Wollen Sie den Absolutwert oder das Vorzeichen festlegen ? (1/2) --> ");
    scanf("%d", &w);

    switch(w){
    case 1:
        printf("Geben Sie Ihre zahl ein --> ");
        scanf("%ld", &z);

        printf("\nAbsolutwert ihrer Eingabe --> %d\n\n", abs(z));
    break;
    case 2:
        printf("Geben Sie Ihre zahl ein --> ");
        scanf("%ld", &z);

        if(vor(z)==(-1)){
            printf("\nIhre Zahl ist Negativ!\n\n");
        }else if(vor(z)==0){
            printf("\nIhre Zahl ist eine Null!\n\n");
        }else if(vor(z)==1){
            printf("\nIhre Zahl ist Positiv!\n\n");
        }
    }
    return 0;
}

int abs(long z){
    if(z<0){
        z*=(-1);
    }
    return z;
}

int vor(long z){
    if(z<0){
        return -1;
    }else if(z==0){
        return 0;
    }else if(z>0){
        return 1;
    }
    return z;
}

#include<stdio.h>
#include<math.h>

double power(double a, int b);

int main(void){
    double a, x;
    int b, y, z;
    int erg1, erg2;
    char ch;

    printf("Erste Zahl = ");
    erg1 = scanf("%lf%c", &a, &ch);

    if(erg1 != 2 || ch != '\n'){
        printf("\nFalsche Eingabe!\n\n\n");
    }else{
        printf("Zweite Zahl = ");
        erg2 = scanf("%d%c", &b, &ch);

        if(erg2 != 2 || ch != '\n'){
            printf("\nFalsche Eingabe!\n\n\n");
        }else{
            x = a;
            y = b;
            z = 1;

            while(y>0){
                if(y%2==1){
                    z*=x;
                }
                y/=2;
                x*=2;
            }
            if(a>0 && b>0){
                z = power(a, b);
            }else{ z = -1; }
            printf("\nErgebnis = %d\n\n\n", z);
        }
    }
    return 0;
}

double power(double a, int b){
    int i=0;
    double erg=1;

    for(i=0; i<b; i++){
        erg*=a;
    }
    return erg;
}

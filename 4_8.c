#include<stdio.h>
#include<math.h>

double flaeche(double a, double b, double c);
int isDreieck(double a, double b, double c);

int main(void){
    double a, b, c, A;
    int erg;
    char ch;

    printf("Geben Sie die drei Seiten des Dreiecks im Format a/b/c ein --> ");
    erg = scanf("%lf/%lf/%lf%c", &a, &b, &c, &ch);

    if(erg != 4 || ch != '\n'){
        printf("Falsche Eingabe!");
    }else{
        if(isDreieck(a, b, c)==1){
            A = flaeche(a, b, c);
            printf("\nBetrag der Flaeche --> %.3lf\n\n", A);
        }else{
            A = 0;
            printf("\nBetrag der Flaeche --> %.1lf\n\n", A);
        }
    }

    return 0;
}

double flaeche(double a, double b, double c){
    double u, s, A;

    u = a+b+c;
    s = u/2;

    A = sqrt(s*(s-a)*(s-b)*(s-c));

    return A;
}

int isDreieck(double a, double b, double c){
    if((a+b)>c && (b+c)>a && (a+c)>b && a>0 && b>0 && c>0){ return 1; }
    else{ return 0; }
}

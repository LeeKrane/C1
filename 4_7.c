#include<stdio.h>
#include<math.h>

double hypotenuse(double a, double b);

int main(void){
    double a, b, c;
    int erg;
    char ch;

    printf("Geben Sie die Hypotenusen im Format a/b ein --> ");
    scanf("%lf/%lf%c", &a, &b, &ch);

    if(erg != 3 || ch != '\n'){
        printf("Falsche Eingabe!");
    }else{
        c = hypotenuse(a, b);

        if(c!=0){
            printf("\n\nDie Hypotenuse betraegt --> %.3lf\n\n", c);
        }else{
            printf("\n\nDie Hypotenuse betraegt --> %.1lf\n\n", c);
        }
    }

    return 0;
}

double hypotenuse(double a, double b){
    double h;

    if(a>0 && b>0){
        h = sqrt((a*a)+(b*b));
    }else{
        h = 0.0;
    }

    return h;
}

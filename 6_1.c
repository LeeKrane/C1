#include<stdio.h>
#include<string.h>

double addition(double w1, double w2);
double subtraktion(double w1, double w2);
double multiplikation(double w1, double w2);
double division(double w1, double w2);

int main(int argc, char **argv){
    double wert1=0, wert2=0, erg;
    char vz;

    if(argc != 4){ return 0; }
    if(*argv[2] != '+' && *argv[2] != '-' && *argv[2] != 'x' && *argv[2] != '/'){ return 0; }

    sscanf(argv[1], "%lf", &wert1);
    sscanf(argv[3], "%lf", &wert2);
    vz = *argv[2];

    switch(vz){
        case '+':
            erg = addition(wert1, wert2);
            break;
        case '-':
            erg = subtraktion(wert1, wert2);
            break;
        case 'x':
            erg = multiplikation(wert1, wert2);
            break;
        case '/':
            erg = division(wert1, wert2);
            break;
    }

    printf("Das Ergebnis von %.2lf %c %.2lf ist %.2lf", wert1, vz, wert2, erg);

    return 0;
}

double addition(double w1, double w2){
    return w1 + w2;
}

double subtraktion(double w1, double w2){
    return w1 - w2;
}

double multiplikation(double w1, double w2){
    return w1 * w2;
}

double division(double w1, double w2){
    return w1 / w2;
}

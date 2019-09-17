#include<stdio.h>
#include<math.h>

double vol(double r, double h);

int main(void){
    double v, r, h;

    printf("Radius             Hoehe          Volumen\n");
    printf("__________________________________________\n\n");

    for(r=0.5; r<=2.0; r+=0.5){
        for(h=0.0; h<=2.0; h+=0.5){
            v = vol(r,h);

            printf("%lf         %lf         %lf\n",r,h,v);
        }
    }
    printf("\n\n");
    return 0;
}

double vol(double r, double h){
    double v;

    v=r*r*M_PI*h;

    return v;
}

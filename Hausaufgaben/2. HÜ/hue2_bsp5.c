#include<stdio.h>
#include<math.h>

int main(void) {
    float alpha, beta, gamma, h;

    printf("Grad Anzahl des Winkels ALPHA --> ");
    scanf("%g", &alpha);
    printf("Grad Anzahl des Winkels BETA --> ");
    scanf("%g", &beta);

    gamma = 180 - alpha - beta;
    h = alpha + beta + gamma;

    printf("Grad GAMMA hat diesen Winkel --> %g\n\n", gamma);

    if(gamma>90){
        printf("spitzwinkeliges Dreieck!\n\n");
    }
    if(fabs (gamma-90) < 1E-1){
        printf("rechtwinkeliges Dreieck!\n\n");
    }
    if(gamma<90){
        printf("stumpfwinkeliges Dreieck!\n\n");
    }
    if(fabs (alpha-beta) < 1E-1 && fabs (alpha-gamma) < 1E-1 && fabs (beta-gamma) < 1E-1){
        printf("gleichseitiges Dreieck!\n\n");
    }
    if(fabs (alpha-beta) < 1E-1){
        printf("gleichschenkeliges Dreieck!\n\n");
    }
    if(fabs (alpha-beta) < 1E-1 && fabs (gamma-90) < 1E-1){
        printf("rechtwinkelig-gleichschenkeliges Dreieck!\n\n");
    }
    if(h>180){
        printf("Die angegeben Winkelmaﬂe sind keine Maﬂe fuer ein Dreieck!\n\n");
    }
    return 0;
}

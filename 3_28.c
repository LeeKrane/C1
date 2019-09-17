#include<stdio.h>
#include<math.h>

int main129(void){

    int i;                  // switch case Variable
    int ok;                 // Eingabe Überprüfung
    double U, A, r;         // Umfang, Fläche, Radius
    printf("\nGeben Sie an, welchen Wert Sie zuweisen koennen:\nUmfang=1\nFlaeche=2\nRadius=3\nGeben Sie hier ein --> ");
    ok=scanf("%d", &i);

    if(ok==1){
        switch(i){
        case 1:
            printf("\nGeben Sie den Wert vom Umfang ein (bis zu 3 Nachkommastellen) --> ");
            scanf("%lf", &U);

            r=U/2/M_PI;
            A=r*r*M_PI;

            printf("\nUmfang -> %.3lf\nFlaeche -> %.3lf\nRadius -> %.3lf\n\n", U, A, r);
            break;
        case 2:
            printf("\nGeben Sie den Wert von der Flaeche ein (bis zu 3 Nachkommastellen) --> ");
            scanf("%lf", &A);

            r=sqrt(A/M_PI);
            U=2*r*M_PI;

            printf("\nUmfang -> %.3lf\nFlaeche -> %.3lf\nRadius -> %.3lf\n\n", U, A, r);
            break;
        case 3:
            printf("\nGeben Sie hier den Wert vom Radius ein (bis zu 3 Nachkommastellen) --> ");
            scanf("%lf", &r);

            A=r*r*M_PI;
            U=2*r*M_PI;

            printf("\nUmfang -> %.3lf\nFlaeche -> %.3lf\nRadius -> %.3lf\n\n", U, A, r);
            break;
        default:
            printf("\nDiese Eingabe trifft auf keine der 3 Varianten zu!\n");
        }
    }else{
        printf("\nDiese Eingabe trifft auf keine der 3 Varianten zu!\n");
    }
    return 0;
}

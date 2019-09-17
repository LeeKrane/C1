#include<stdio.h>

int main436(void){

    int i;                  // switch case Variable
    int ok;                 // Eingabe Überprüfung
    printf("Wert fuer i --> ");
    ok=scanf("%d", &i);

    if(ok==1){
        switch(i){
        case 0:
            printf("Null");
            break;
        case 1:
            printf("Eins");
            break;
        case 2:
            printf("Zwei");
            break;
        case 3:
            printf("Drei");
            break;
        case 4:
            printf("Vier");
            break;
        case 5:
            printf("Fuenf");
            break;
        case 6:
            printf("Sechs");
            break;
        case 7:
            printf("Sieben");
            break;
        case 8:
            printf("Acht");
            break;
        case 9:
            printf("Neun");
            break;
        default:
            printf("Die Eingabe ist keine Zahl im Bereich 0-9!");
        }
    }
    return 0;
}

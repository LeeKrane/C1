#include<stdio.h>

int main(void){

    int i;                  // switch case Variable
    int ok;                 // Eingabe Überprüfung
    char enter='\n';        // Überprüfung ob nach Eingabe ENTER
    printf("Wert fuer i --> ");
    ok=scanf("%d%c", &i, &enter);

    if(ok==2 && enter=='\n'){
        switch(i){
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
        default:
            printf("Eingabe war nicht korrekt!");
        }
    }
    return 0;
}

#include<stdio.h>

int main(void){
    int anzA=0, anzE=0, anzI=0, anzO=0, anzU=0;
    int c;

    printf("Schreiben Sie hier: \n\n");

    while((c = getchar()) != EOF){
        switch(c){
            case 'A':
            case 'a':   anzA++;
            break;
            case 'E':
            case 'e':   anzE++;
            break;
            case 'I':
            case 'i':   anzI++;
            break;
            case 'O':
            case 'o':   anzO++;
            break;
            case 'U':
            case 'u':   anzU++;
            break;
            default:
            break;
        }
    }
    printf("Es wurden %d mal A/a, %d mal E/e, %d mal I/i, %d mal O/o und %d mal U/u eingegeben!", anzA, anzE, anzI, anzO, anzU);
    return 0;
}

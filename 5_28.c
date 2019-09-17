#include <stdio.h>

void grossklein(char abc[][15],int *gr,int *kl);

int main(void){
    char tab[10][15]={"I","bims","boII"};
    int gr=0,kl=0;

    grossklein(tab,&gr,&kl);

    printf("Es sind %d Kleinbuchstaben und %d Grossbuchstaben vorhanden.",kl,gr);

    return 0;
}

void grossklein(char abc[][15],int *gr,int *kl){
    int i,j;

    for(i=0;i<10;i++){
        for(j=0;j<15;j++){
            if(abc[i][j] >= 'A' && abc[i][j] <= 'Z'){
                (*gr)++;
            }else if(abc[i][j] >= 'a' && abc[i][j] <= 'z'){
                (*kl)++;
            }
        }
    }
}

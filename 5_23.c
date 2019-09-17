#include<stdio.h>
#include<string.h>

void check(char *str, int *gr, int *kl, int *so);

int main(void){
    int gr=0, kl=0, so=0;
    char str[]="Hallo, i bims EINS KRANE auf nem grossen Kran, der rot SEIN TUT!";

    check(str, &gr, &kl, &so);
    puts(str);
    printf("Grossbuchstaben --> %d\nKleinbuchstaben --> %d\nSonderzeichen --> %d\n\n", gr, kl, so);
}

void check(char *str, int *gr, int *kl, int *so){
    int len=strlen(str), i;

    for(i=0; i<len; i++){
        if(isupper(str[i])){
            (*gr)++;
        }else if(islower(str[i])){
            (*kl)++;
        }else{
            (*so)++;
        }
    }
}

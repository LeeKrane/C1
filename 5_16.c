#include<stdio.h>
#include<string.h>

char artikel(char *string);

int main(void){
    char s[100]={};
    printf("Geben Sie Ihre Artikelnummer ein --> ");
    gets(s);
    if(artikel(s)==1){
        printf("Der String ist eine gueltige Artikelnummer!");
    }else{
        printf("Der String ist keine gueltige Artikelnummer!");
    }
    return 0;
}

char artikel(char *string){
    int i, len=strlen(string);

    if(len != 10){ return 0; }

    for(i=0; i<5; i++){
        if(string[i]<'A' || string[i]>'Z'){ return 0; }
    }

    for(i=5; i<10; i++){
        if(string[i]<'0' || string[i]>'9'){ return 0; }
    }

    return 1;
}

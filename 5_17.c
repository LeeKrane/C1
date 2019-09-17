#include<stdio.h>
#include<string.h>

int pruef(char *string);

int main(void){
    char s[300];

    printf("Geben sie hier Ihre Matrikelnummer ein --> ");
    gets(s);

    if(pruef(s)){
        printf("Der String ist eine gueltige Matrikelnummer!");
    }else{
        printf("Der String ist keine gueltige Matrikelnummer!");
    }
    return 0;
}

int pruef(char *string){
    int i, wert, len=strlen(string);

    if(len!=10){
        return 0;
    }

    i=sscanf(string,"0110038%d",&wert);
    if(i==1 && wert>=001 && wert<=120){
        return 1;
    }
    return 0;
}

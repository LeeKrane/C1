#include<stdio.h>
#include<string.h>

char palindrom(char *string);

int main(void){
    char s[300]={};
    printf("Geben Sie Ihr Wort zur Palendrompruefung ein (CAPSLOCK) --> ");
    gets(s);
    if(palindrom(s)==1){
        printf("Der String ist ein Palindrom");
    }else{
        printf("Der String ist kein Palindrom");
    }

    return 0;
}

char palindrom(char *string){
    int i, j, len=strlen(string);

    for(i=len, j=0; i>=0, j<len; i--, j++){
        if(string[i-1]!=string[j]){
            return 0;
        }
    }
    return 1;
}

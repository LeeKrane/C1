#include<stdio.h>
#include<string.h>

char delChar(char *string, int wert);

int main(void){
    char s[]="ABCDEF";
    puts(s);
    delChar(s, 3);
    puts(s);
    delChar(s, 10);
    puts(s);

    return 0;
}

char delChar(char *string, int wert){
    int i, len=strlen(string);

    for(i=wert; i<len; i++){
        string[i]=string[i+1];
    }
    return wert;
}

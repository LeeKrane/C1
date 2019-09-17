#include<stdio.h>
#include<string.h>

char swapChar(char *string, int wert, int wert2);

int main(void){
    char s[]="ABCDEF";
    puts(s);
    swapChar(s, 2, 4);
    puts(s);
    swapChar(s, 1, 10);
    puts(s);

    return 0;
}

char swapChar(char *string, int wert, int wert2){
    int i, len=strlen(string);

    if(wert>len || wert2>len || wert<0 || wert2<0){ return wert; }
    i = string[wert-1];
    string[wert-1] = string[wert2-1];
    string[wert2-1] = i;
    return wert;
}

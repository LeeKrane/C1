#include<stdio.h>
#include<string.h>

void stringReverse(char *string);

int main(void){
    char s[]="Halloechen";
    puts(s);
    stringReverse(s);
    puts(s);
    return 0;
}

void stringReverse(char *string){
    int i, len=strlen(string);
    char h;

    for(i=0; i<len; i++, len--){
        h = string[i];
        string[i] = string[len-1];
        string[len-1] = h;
    }
}

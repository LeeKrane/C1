#include<stdio.h>
#include<string.h>
#include<ctype.h>

int parseInt(const char *s, int *p);

int main(void){
    char str[]="11";
    int p;
    printf("Erfolg: %d\n", parseInt(str, &p));
    return 0;
}

int parseInt(const char *s, int *p){
    int i;

    for(i=0; i<strlen(s); i++){
        if(!isdigit(s[i])){
            return 0;
        }
    }
    sscanf(s,"%d",p);
    return 1;
}

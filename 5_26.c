#include<stdio.h>
#include<string.h>

char test(char *artNr);

int main(void){
    char artNr[1000][11] = {
        {"ABCD123456"},{"ABCD012345"},{"ABCD1234567"}
    };
    int anz=0, i;

    for(i=0; i<1000; i++){
        if(test(artNr[i])==1){
            anz++;
        }
    }
    printf("%d gueltige Artikelnummern!", anz);
    return 0;
}

char test(char *artNr){
    int i;

    if(strlen(artNr) != 10){ return 0; }

    for(i=0; i<4; i++){
        if(artNr[i]<'A' || artNr[i]>'D'){ return 0; }
    }

    for(; i<10; i++){
        if(artNr[i]<'0' || artNr[i]>'7'){ return 0; }
    }
    return 1;
}

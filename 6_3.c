#include<stdio.h>
#include<string.h>

int binary(int count, int *arguments[], str[]);

int main(int argc, char *argv[]){
    char string[20];
    if(binary(argc, argv, string) == 1){

    }
}

int binary(int count, int *arguments[], str[]){
    int i, ret=0;

    for(i=0; i<count; i++){
        if(arguments[i] == '0' || arguments[i] == '1'){
            if(ret != 1){ ret = 1; }
            *str[i] = *arguments[i] - '0';
        }
    }
    if(ret == 1){
        return 1;
    }
    return 0;
}

#include<stdio.h>
#include<string.h>

int main(void){
    char str1[50]={}, str2[50]={};
    char strcopy1[50]={}, strcopy2[50]={};

    printf("1. String --> ");
    gets(str1);

    printf("2. String --> ");
    gets(str2);

    if(strcmp(str1, str2) == 1){
        printf("Die Strings sortiert: %s, %s\n", str2, str1);
    }else{
        printf("Die Strings sortiert: %s, %s\n", str2, str1);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int checkstr(char *str);
void extract_one(char *str, int *first);
void extract_two(char *str, int *second);
void extract_three(char *str, int *third);

int main(void){
    char str[10]={};
    int first=0;
    int second=0;
    int third=0;

    printf("Enter a 10-digit telephone number --> ");
    gets(str);

    if(checkstr(str)){
        extract_one(str, &first);
        printf("The area code is %d\n", first);

        extract_two(str, &second);
        printf("The exchange code is %d\n", second);

        extract_three(str, &third);
        printf("The number is %d\n", third);

        printf("The entire telephone number is (%d)%d-%d\n\n", first, second, third);
    }else{
        printf("The telephone number is wrong!\n\n");
    }
    return 0;
}

int checkstr(char *str){
    int i, j=0;
    if(strlen(str)==10){
        for(i=0; i<10; i++){
            if(str[i] >= '0' && str[i] <= '9'){
                j++;
            }
        }
        if(j==10){
            return 1;
        }
    }
    return 0;
}

void extract_one(char *str, int *first){
    *first = ((str[0]-'0')*100)+((str[1]-'0')*10)+(str[2]-'0');
}

void extract_two(char *str, int *second){
    *second = ((str[3]-'0')*100)+((str[4]-'0')*10)+(str[5]-'0');
}

void extract_three(char *str, int *third){
    *third = ((str[6]-'0')*1000)+((str[7]-'0')*100)+((str[8]-'0')*10)+(str[9]-'0');
}

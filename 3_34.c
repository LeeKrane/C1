#include<stdio.h>

int main(void){
    int anz1=0, anz2=0, anz3=0;
    int c;
    char ch='ß';

    printf("Geben Sie hier Ihre Zeichen ein --> ");

    while((c = getchar())!=EOF){
        if(c >= 'A' && c <= 'Z'){
            anz1++;
        }else if(c >= 'a' && c <= 'z'){
            anz2++;
        }else if(c >= '0' && c <= '9'){
            anz3++;
        }
    }
    printf("Es wurden %d englische Gro%cbuchstaben, %d englische Kleinbuchstaben und %d Ziffernzeichen einegegeben.", anz1, ch, anz2, anz3);
}

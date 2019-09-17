#include<stdio.h>

int main(void){
    int anz1=0, anz2=0;
    int c;

    printf("Geben Sie hier Ihre Zeichen ein --> ");

    while((c = getchar())!=EOF){
        if(c == '('){
            anz1++;
        }else if(c == ')'){
            anz2++;
        }
    }
    if(anz1==0 || anz2==0){
        printf("Es wurden keine runden Klammern eingelesen!\n\n");
    }else if(anz1==anz2){
        printf("Es wurden alle geöffneten runden Klammern wieder geschlossen! (%d)\n\n", anz1);
    }else if(anz1>anz2){
        printf("Es wurden %d runde Klammern geoeffnet aber nur %d wieder geschlossen!\n\n", anz1, anz2);
    }else if(anz2>anz1){
        printf("Es wurden nur %d runde Klammern geoeffnet obwohl %d geschlossen werden koennten!\n\n", anz1, anz2);
    }
}

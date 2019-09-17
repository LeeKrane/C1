#include<stdio.h>

void gug(int zahl,int *g, int *ug);

int main(){
    int zahl;
    int g=0,ug=0,ok;
    char ch;

    printf("Geben Sie eine Zahl ein:");
    ok= scanf("%d%c",&zahl,&ch);

    if (ok!=2 || ch != '\n'){
        printf("\nFehlerhafte eingabe!");
        return 1;
    }

    gug(zahl,&g,&ug);
    printf("Gerade zahlen: %d, Ungerade zahlen: %d",g,ug);
    return 0;
}
void gug(int zahl,int *g, int *ug){
    int sum=0;
    while(zahl>0){
        sum+=zahl%10;
        zahl/=10;
        if(sum%2==0) { (*g)++; }
        else{ (*ug)++; }
    }
}

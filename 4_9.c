#include<stdio.h>

int ggT(int a, int b);
int kgv(int a, int b);

int main(void){
    int a, b, erg;
    char ch;

    printf("Geben Sie die zwei Zahlen im Format a/b ein --> ");
    erg = scanf("%d/%d%c", &a, &b, &ch);

    if(erg != 3 || ch != '\n'){
        printf("Falsche Eingabe!");
    }else{
        printf("\n\nkgv --> %d\nggT --> %d\n\n", kgv(a, b), ggT(a, b));
    }
    return 0;
}

int ggT(int a, int b){
    if(a<0 || b<0){return 0;}
    while(a!=b){
        if(a>b){
            a-=b;
        }else{
            b-=a;
        }
    }
    return a;
}

int kgv(int a, int b){
    int h;

    h = (a*b)/(ggT(a, b));

    return h;
}

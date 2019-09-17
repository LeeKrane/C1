#include<stdio.h>

int ggT(int a, int b);

int main(void){
    int a, b;

    printf("Geben Sie zwei Zahlen ein (Format a/b) --> ");
    scanf("%d/%d", &a, &b);

    printf("Der ggT ist %d", ggT(a,b));
    return 0;
}

int ggT(int a, int b){
    while(a!=b){
        if(a>b){
            a-=b;
        }else{
            b-=a;
        }
    }
    return a;
}

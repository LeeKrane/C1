#include<stdio.h>

int main(void) {
    int a, b, c;
    int A, B, C;

    printf("Wert1: ");
    scanf("%d", &a);
    printf("\nWert2: ");
    scanf("%d", &b);
    printf("\nWert3: ");
    scanf("%d", &c);

    if(a>b && a>c) {
        A=a;
        if(b>c) {
            B=b;
            C=c;
        }else{
            B=c;
            C=b;
        }
    }else if(b>a && b>c) {
        A=b;
        if(c>a) {
            B=c;
            C=a;
        }else{
            B=a;
            C=c;
        }
    }else if(c>a && c>b) {
        A=c;
        if(b>a) {
            B=b;
            C=a;
        }else{
            B=a;
            C=b;
        }
    }

    printf("\n\nSortiert:\n\nWert1: %d\nWert2: %d\nWert3: %d\n\n", A, B, C);

    return 0;
}

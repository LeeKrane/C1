#include <stdio.h>

int main(void) {
    int a,b;

    printf(" a | b | !(a && b) | !a || !b \n");
    printf("==============================\n");

    for (a = 0;a<=1;a++){
        for (b = 0;b<=1;b++){

            printf(" %d | %d |     %d     |     %d\n",a,b,!(a && b),!a || !b);
        }
    }
return 0;
}

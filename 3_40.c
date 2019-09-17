#include <stdio.h>

int main(void) {
    int a=0,b=0,c=0;

    printf("(a && c) || (b && !c) || (a && b) = (a && c) || (b && !c)\n");

    for (a = 0;a<=1;a++){
        for (b = 0;b<=1;b++){
            for (c = 0;c<=1;c++){
                printf("    %d    ||    %d      ||    %d     =                %d\n",a,b,c,(a && c) || (b && !c));
            }
        }
    }
    return 0;
}

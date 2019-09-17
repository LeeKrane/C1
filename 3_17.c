#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
    int z1, z2;

    srand(time(NULL));

    z1=rand()%1000+1;
    z2=rand()%1000+1;

    if(z1!=z2) {
    printf("Wert 1 ist --> %d\nWert 2 ist --> %d\n\n", z1, z2);
    }else{
    printf("Wert 1 und Wert 2 sind --> %d", z1);
    }

    return 0;
}

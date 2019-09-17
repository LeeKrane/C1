#include<stdio.h>

double add(int z);

int main(void){
    int z;

    for(z=1; z<=1000000000; z*=10){
        printf("%10d = %lf\n", z, add(z));
    }

    return 0;
}

double add(int z){
    int i;
    double erg=0;

    for (i=1; i<=z; i++){
        erg += 1.0/i;
    }
    return erg;
}

#include<stdio.h>

int prim1(long zahl);
int prim2(long zahl);
int prim3(long zahl);

int main(void){
    long z;

    for(z=1000000000; z<=1000000100; z++){
        if(prim3(z)){
            printf("%ld (prime)\n", z);
        }else{
            printf("%ld\n", z);
        }
    }
    return 0;
}

// langsame Variante - alle Teiler werden durchgerechnet
int prim1(long zahl){
    int teiler;
    int isprim=1;

    for(teiler=2; teiler<zahl; teiler++){
        if(zahl%teiler==0){
            isprim=0;
        }
    }
    return isprim;
}

// bessere Variante
int prim2(long zahl){
    int teiler;

    for(teiler=2; teiler<zahl; teiler++){
        if(zahl%teiler==0){
            return 0;
        }
    }
    return 1;
}

// optimale Variante
int prim3(long zahl){
    int teiler;

    for(teiler=2; teiler*teiler<zahl; teiler++){
        if(zahl%teiler==0){
            return 0;
        }
    }
    return 1;
}

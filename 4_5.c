#include<stdio.h>

int anz(long zahl, int ziff);

int main(void){
    long zahl;
    int sum=0;

    for(zahl=10000; zahl<100000; zahl++){
         sum+=anz(zahl, 7);
    }

    printf("Die Ziffer wurde %d mal gefunden!\n", sum);
    return 0;
}

int anz(long zahl, int ziff){
    int sum=0;

    while(zahl>0){
        if(zahl%10 == ziff) {
            sum++;
        }
        zahl/=10;
    }
    return sum;
}

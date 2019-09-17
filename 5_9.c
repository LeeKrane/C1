#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void check(int f[], size_t n, int *ger, int *uger);

int main(void){
    int f[10], ger=0, uger=0;
    size_t n = sizeof(f)/sizeof(f[0]), i;

    srand((unsigned int)time(NULL));

    for(i=0; i<n; i++){
        f[i] = rand()%100;
        printf("%d  ", f[i]);
    }

    check(f,n,&ger,&uger);

    printf("\n\nGerade --> %d\nUngerade --> %d\n\n", ger, uger);

    return 0;
}

void check(int f[], size_t n, int *ger, int *uger){
    size_t i;

    for(i=0; i<n; i++){
        if(f[i]%2==0){
            (*ger)++;
        }else{
            (*uger)++;
        }
    }
}

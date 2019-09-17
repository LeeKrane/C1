#include<stdio.h>

int main(void){
    int z, p=2;

    printf("Zahl --> ");
    scanf("%d", &z);

    printf("\n%d = ", z);

    while(z>1){
        if(z%p==0){
            z/=p;
            if(z>1){
                printf("%d*", p);
            }else{
                printf("%d\n\n", p);
            }
        }else{
            p++;
        }
    }
    return 0;
}

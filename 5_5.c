#include<stdio.h>

int count(int f[], size_t n, int num);

int main(void){
    int a[20] = {1,2,3,4,5,6,7,8,9,0,2,5,8,7,3,8,7,6,9,8};
    int num=0;
    int ok;
    char enter;

    printf("Zahl (0-9) --> ");
    ok = scanf("%d%c", &num, &enter);

    if(ok!=2 || enter!='\n'){
        printf("\nFalsche Eingabe!\n");
    }else{
        printf("\nDie Ziffer %d kommt %d mal vor!\n", num, count(a, 20, num));
    }

    return 0;
}

int count(int f[], size_t n, int num){
    int counter=0;
    size_t i;

    for(i=0; i<n; i++){
        if(f[i]==num){ counter++; }
    }
    return counter;
}

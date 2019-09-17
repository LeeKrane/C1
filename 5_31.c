#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    int arr[19][19] = {}, confirm=0;
    size_t n;

    while(confirm != 1){
        srand(time(NULL));
        n = rand() % 20;
        confirm = n%2;
    }

}

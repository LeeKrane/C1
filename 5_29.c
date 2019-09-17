#include<stdio.h>
#define COLS 3

int diagonale(int t[][COLS]);

int main(void){
    int tab[COLS][COLS]={{1,4,5},{11,29,58},{2,53,85}};

    printf("Groesster Wert: %d", diagonale(tab));

    return 0;
}

int diagonale(int t[][COLS]){
    int max=t[0][0],i,j;

    for(i=0;i<COLS;i++)
        for(j=0;j<COLS;j++){
            if(i==j){
                if(t[i][j]>max){
                    max=t[i][j];
                }
            }
        }
    return max;
}

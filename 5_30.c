#include <stdio.h>
#define COLS 3

int sym(int m[][COLS]);

int main(void){
    //int m[COLS][COLS];                                    //weder sym noch schiefsymmetrisch
    int m[COLS][COLS]={{1,2,5},{2,2,6},{5,6,1}};          //symmetrisch
    //int m[COLS][COLS]={{0,7,23},{-7,0,4},{-23,-4,0}};     //schiefsymmetrisch
    int pruefe;

    pruefe = sym(m);

    switch (pruefe){
        case 1:
            printf("Die Matrix ist symmetrisch.\n");
            break;
        case -1:
            printf("Die Matrix ist schiefsymmetrisch.\n");
            break;
        case 0:
            printf("Die Matrix ist weder symmetrisch noch schiefsymmetrisch.\n");
            break;
    }
    return 0;
}

int sym(int m[][COLS]){
    int i, j, check = 0;

    for(i=0; i<COLS; i++){
        for(j=0; j<COLS; j++){
            if(m[i][j]==m[j][i]){
                check++;
            }
        }
    }
    if(check == COLS*COLS){
        return 1;
    }else{
        check = 0;
        for(i=0; i<COLS; i++){
            for(j=0; j<COLS; j++){
                if(m[i][j]==-m[j][i]){
                    check++;
                }
            }
        }
        if(check == COLS*COLS){
            return -1;
        }else{
            return 0;
        }
    }
}

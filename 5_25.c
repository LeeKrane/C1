#include<stdio.h>
#define COLS 3

int nachbarn(int tab[][COLS], int z, int s, int i, int j);

int main(void){
    int f[COLS][COLS] = {{1,2,3},{4,5,6},{7,8,9}};
    int kopie[COLS][COLS] = {};
    int z = COLS, s = COLS;
    int i, j;

    for(i=0; i<z; i++){
        for(j=0; j<s; j++){
            kopie[i][j] = nachbarn(f, z, s, i, j);
        }
    }
    for(i=0; i<z; i++){
        for(j=0; j<s; j++){
            if(f[i][j]<10){
                printf("%1d  ", f[i][j]);
            }else{
                printf("%2d ", f[i][j]);
            }
        }
        if(i != COLS/2){
            printf("           ");
        }else{
            printf("   ==>     ");
        }
        for(j=0; j<s; j++){
            if(kopie[i][j]<10){
                printf("%1d   ", kopie[i][j]);
            }else if(kopie[i][j]<100){
                printf("%2d  ", kopie[i][j]);
            }else{
                printf("%3d ", kopie[i][j]);
            }
        }
        putchar('\n');
    }
    return 0;
}

int nachbarn(int tab[][COLS], int z, int s, int i, int j){
    int i2, j2;
    int sum = 0;

    for(i2=i-1; i2<=i+1; i2++){
        for(j2=j-1; j2<=j+1; j2++){
            if(!(i2<0 || i2>=s || j2<0 || j2>=z)){
                sum += tab[i2][j2];
            }
        }
    }
    sum -= tab[i][j];

    return sum;
}

#include<stdio.h>

int maximum(int f[3][3], size_t z, size_t s, int *zIndex, int *sIndex);

int main(void){
    int zIndex, sIndex;
    int f[3][3] = {{-5,-17,-3},{-88,-1,-2},{-88,-87,-34}};
    size_t z=3, s=3;
    int maxi;

    maxi = maximum(f, z, s, &zIndex, &sIndex);

    printf("Der groesste Wert %d ist an der Stelle %d|%d", maxi, zIndex, sIndex);
}

int maximum(int f[3][3], size_t z, size_t s, int *zIndex, int *sIndex){
    int i, j;
    int max = f[0][0];
    *zIndex=0;
    *sIndex=0;

    for(i=0; i<z; i++){
        for(j=0; j<s; j++){
            if(f[i][j] > max){
                max = f[i][j];
                *zIndex = i;
                *sIndex = j;
            }
        }
    }
    return max;
}

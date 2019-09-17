#include<stdio.h>

int main(void){
    int x, y;

    printf("Geben Sie hier die Koordinaten im Format x/y ein --> ");
    scanf("%d/%d", &x, &y);

    if(x > 0 && y > 0){
        printf("Diese Koordinaten sind im 1. Quadrant");
    }else if(x < 0 && y > 0){
        printf("Diese Koordinaten sind im 2. Quadrant");
    }else if(x < 0 && y < 0){
        printf("Diese Koordinaten sind im 3. Quadrant");
    }else if(x > 0 && y < 0){
        printf("Diese Koordinaten sind im 4. Quadrant");
    }else if(x == 0 && y == 0){
        printf("Diese Koordinaten sind der Ursprung");
    }else if(x == 0 && (y < 0 || y > 0)){
        printf("Diese Koordinaten liegen auf der y Achse");
    }else if(y == 0 && (x < 0 || x > 0)){
        printf("Diese Koordinaten liegen auf der x Achse");
    }
    return 0;
}

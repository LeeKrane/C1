#include<stdio.h>
#include<stdlib.h>

int main( void ){
    int feld[19][19] = {{0}};
    int n = 0;
    int i, j;
    int x, y;
    int xakt, yakt;

    printf("Groesse des magischen Quadrates --> ");
    scanf("%d", &n);

    if( n < 1 || n > 19 || n % 2 == 0 ){
        printf("Fehlerhaftes n!");
        return 1;
    }

    x = 0;
    y = n/2;

    for(i = 1; i <= n * n ; i++){
        feld[x][y] = i;
        xakt = x;
        yakt = y;
        x--;
        y++;

        if( x < 0){
            x = n-1;
        }
        if( y >= n ){
            y = 0;
        }
        if( feld[x][y] != 0 ){
            x = xakt + 1;
            y = yakt;
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%4d", feld[i][j]);
        }
        putchar('\n');
    }
    return 0;
}

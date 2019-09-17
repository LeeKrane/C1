#include<stdio.h>
#include<math.h>

int main(){
    int a,b,u,A;
    double d;
    printf("Geben sie die erste seitenl%cnge ein: ", 132);		//132 == ASCII Code für "ä
    scanf("%d",&a);
    printf("Geben sie die zweite seitenl%cnge ein: ", 132);		//132 == ASCII Code für "ä
    scanf("%d",&b);

    u = a+b+a+b;		//Umfangsberechnung
    A = a*b;			//Flächenberechnung
    d = sqrt(a*a+b*b);	//Pythagoräischer Lehrsatz

    printf("Der Umfang betraegt:%d\n",u);
    printf("Die Faeche betraegt:%d\n",A);
    printf("Die Diagonbale ist: %.2lf",d);

    return 0;
}

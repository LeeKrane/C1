#include<stdio.h>
#include<math.h>

int main(void){
  int r;
  double V=0,O=0;

  printf("Geben sie den Radius ein: ");
  scanf("%d",&r);

  V = 4/3.0*M_PI*(r*r*r);
  O = 4*M_PI*r*r;

  printf("Das Volumen betraegt: %.2lf\n",V);
  printf("Die Oberflaeche betraegt: %.2lf ",O);

return 0;

}


#include<stdio.h>
#include<math.h>

double foo(double x, double *z);

int main(){
    double i,x=0;

    for (i=0; i<=6; i+=0.5){
        foo(i, &x);
        printf("%.2lf: %.2lf\n",i, x);
    }
    return 0;
}

double foo(double x, double*z){
    if (x<0 || x>6){ printf("\nDer funktionswert ist nicht definiert"); }
    else if(x>=0 && x<2){ *z= 5-2*x; }
    else if(x>=2 && x<4){ *z= 4-3*(x*x-9); }
    else if(x>=4 && x<=6){ *z= x-3; }
    else{ return 0; }
    return 1;
}

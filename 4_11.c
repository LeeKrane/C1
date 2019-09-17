#include<stdio.h>

double pi(unsigned int n);

int main(void){
    double pivar;
    unsigned int i;

    for(i=1; i<=1000000000; i*=10){
        pivar = pi(i);
        printf("        %10d = %lf \n",i,pivar);
    }
    return 0;
}

double pi(unsigned int n){
    int pm=0;
    unsigned int i;
    double pivar=0;

    for (i=1;i<=n;i+=2){
        if(pm==0){
            pivar+=1.0/i;
            pm=1;
        }else{
            pivar-=1.0/i;
            pm=0;
        }
    }

    pivar*=4;

    return pivar;
}

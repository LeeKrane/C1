#include<stdio.h>
#include<math.h>

int main ()
{
    // Variablen

    double geld;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,p=0;    // a = 500 Euro, b = 200 Euro, c = 100 Euro, d = 50 Euro, e = 20 Euro, f = 10 Euro, g = 5 Euro, n = 2 Euro, p = 1 Euro,

                                                                       //h = 50 Cent, i = 20 cent, j = 10 Cent, k = 5 Cent, l = 2 Cent, m 1 Cent

    printf("Geldbetrag eingeben.->");
    scanf("%lf",&geld);


    //Berechnung
    while (geld>499.99)
    {
        geld=geld-500 ;
        a=a+1;
    }
    while (geld>199.99)
    {
        geld=geld-200;
        b=b+1;
    }
    while (geld>99.99)
    {
        geld=geld-100;
        c=c+1;
    }
    while (geld>49.99)
    {
        geld=geld-50;
        d=d+1;
    }
    while (geld>19.99)
    {
        geld=geld-20;
        e=e+1;
    }
    while (geld>9.99)
    {
        geld=geld-10;
        f=f+1;
    }
    while (geld>4.99)
    {
        geld=geld-5;
        g=g+1;
    }
   while  (geld>1.99)
    {
        geld=geld-2;
        n=n+1;
    }
    while (geld>0.99)
    {
        geld=geld-1;
        p=p+1;
    }

    while (geld>0.49)
    {
        geld=geld-0.50;
        h=h+1;
    }
    while (geld>0.19)
    {
        geld=geld-0.20;
        i=i+1;
    }
    while (geld>0.09)
    {
        geld=geld-0.10;
        j=j+1;
    }
    while (geld>0.049)
    {
        geld=geld-0.05;
        k=k+1;
    }
    while (geld>0.019)
    {
        geld=geld-0.02;
        l=l+1;
    }
    while (geld>0.099)
    {
        geld=geld-0.01;
        m=m+1;
    }

//Ausgabe vom Geldbetrag

    printf("\n %dmal 500 EUR" ,a);
    printf("\n %dmal 200 EUR" ,b);
    printf("\n %dmal 100 EUR" ,c);
    printf("\n %dmal 50 EUR"  ,d);
    printf("\n %dmal 20 EUR"  ,e);
    printf("\n %dmal 10 EUR"  ,f);
    printf("\n %dmal 5 EUR"   ,g);
    printf("\n %dmal 2 EUR"   ,n);
    printf("\n %dmal 1 EUR"   ,p);

    printf("\n %dmal 50 CENT" ,h);
    printf("\n %dmal 20 CENT" ,i);
    printf("\n %dmal 10 CENT" ,j);
    printf("\n %dmal 5 CENT"  ,k);
    printf("\n %dmal 2 CENT"  ,l);
    printf("\n %dmal 1 CENT"  ,m);

    return 0;
}

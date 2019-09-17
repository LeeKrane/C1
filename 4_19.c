#include<stdio.h>

int ggTkgv(int a, int b, int *kgVvar, int *ggTvar);

int main(void)
{
    int a, b, ggTvar, kgVvar, erg;
    char ch;

    printf("Geben Sie die zwei Zahlen im Format a/b ein --> ");
    erg = scanf("%d/%d%c", &a, &b, &ch);

    if(erg != 3 || ch != '\n')
    {
        printf("Falsche Eingabe!");
    }
    else
    {
        ggTkgv(a, b, &kgVvar, &ggTvar);
        printf("\n\nkgV --> %d\nggT --> %d\n\n", kgVvar, ggTvar);
    }
    return 0;
}


int ggTkgv(int a, int b, int *kgVvar, int *ggTvar)
{
    *ggTvar = 0;
    *kgVvar = 0;

    int tempa = a;
    int tempb = b;

    if(a<0 || b<0)
    {
        return 0;
    }

    do
    {
        while(a>b)
        {
            a-=b;
        }
        while(b>a)
        {
            b-=a;
        }
    }
    while(a!=b);

    *ggTvar = a;
    *kgVvar = (tempa*tempb)/a;

    return 1;
}

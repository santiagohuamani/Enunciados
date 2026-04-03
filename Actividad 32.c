#include <stdio.h>

int main()
{
    int a,b,i,suma;

    printf("Numero 1: ");
    scanf("%d",&a);

    printf("Numero 2: ");
    scanf("%d",&b);

    for(i=a;i<=b;i++)
    {
        if(i%5==0)
        suma=suma+i;
    }

    printf("Suma %d",suma);

    return 0;
}

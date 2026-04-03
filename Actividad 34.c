#include <stdio.h>

int main()
{
    int a,b,cociente;

    printf("Numero 1: ");
    scanf("%d",&a);

    printf("Numero 2: ");
    scanf("%d",&b);

    while(a>=b)
    {
        a=a-b;
        cociente++;
    }

    printf("Cociente: %d",cociente);

    return 0;
}

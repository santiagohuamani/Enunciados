#include <stdio.h>

int main()
{
    int a,b,i,producto;

    printf("Numero 1: ");
    scanf("%d",&a);

    printf("Numero 2: ");
    scanf("%d",&b);

    for(i=1;i<=b;i++)
    producto=producto+a;

    printf("Producto: %d",producto);

    return 0;
}

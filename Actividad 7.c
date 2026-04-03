#include <stdio.h>

int main()
{
    int a,b;

    printf("Ingrese numero 1: ");
    scanf("%d",&a);
    printf("Ingrese numero 2: ");
    scanf("%d",&b);

    if(a>b)
        printf("El mayor es %d",a);
    else if(b>a)
        printf("El mayor es %d",b);
    else
        printf("Son iguales");

    return 0;
}

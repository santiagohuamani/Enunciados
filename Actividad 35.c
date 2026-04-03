#include <stdio.h>

int main()
{
    int a,b;

    printf("Numero 1: ");
    scanf("%d",&a);

    printf("Numero 2: ");
    scanf("%d",&b);

    while(a>=b)
    {
        a=a-b;
    }

    printf("Resto %d",a);

    return 0;
}

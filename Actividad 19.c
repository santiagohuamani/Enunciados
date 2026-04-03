#include <stdio.h>

int main()
{
    int num,i,factorial=1;

    printf("Ingrese numero: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial: %d",factorial);

    return 0;
}

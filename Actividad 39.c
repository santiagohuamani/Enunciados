#include <stdio.h>

int main()
{
    int num,i,suma;

    printf("Numero: ");
    scanf("%d",&num);

    for(i=1;i<num;i++)
    {
        if(num%i==0)
        suma=suma+i;
    }

    if(suma==num)
    printf("Perfecto");
    else
    printf("No perfecto");

    return 0;
}

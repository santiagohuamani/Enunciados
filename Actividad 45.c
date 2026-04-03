#include <stdio.h>

int main()
{
    int num,anterior,primero,ultimo,asc=1,desc=1;

    printf("Numero (0 para termina): ");
    scanf("%d",&num);

    primero=num;
    anterior=num;

    printf("Numero: ");
    scanf("%d",&num);

    while(num!=0)
    {
        if(num>anterior)
            desc=0;

        if(num<anterior)
            asc=0;

        anterior=num;

        printf("Numero: ");
        scanf("%d",&num);
    }

    ultimo=anterior;

    if(asc==1)
        printf("Ascendente\n");
    else if(desc==1)
        printf("Descendente\n");
    else
        printf("Desordenado\n");

    printf("Suma primero y ultimo: %d",primero+ultimo);

    return 0;
}

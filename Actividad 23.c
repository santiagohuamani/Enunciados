#include <stdio.h>

int main()
{
    int i,num,positivos,negativos,ceros;


    for(i=1;i<=10;i++)
    {
        printf("Ingrese numero: ");
        scanf("%d",&num);

        if(num>0)
        {
            positivos = positivos + 1;
        }
        else
        {
            if(num<0)
            {
                negativos = negativos + 1;
            }
            else
            {
                ceros = ceros + 1;
            }
        }
    }

    printf("Positivos: %d\n",positivos);
    printf("Negativos: %d\n",negativos);
    printf("Ceros: %d",ceros);

    return 0;
}

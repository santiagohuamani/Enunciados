#include <stdio.h>

int main()
{
    int i,mas,menos;
    float sueldo;


    for(i=1;i<=20;i++)
    {
        printf("Ingrese sueldo: ");
        scanf("%f",&sueldo);

        if(sueldo>2000)
        {
            mas = mas + 1;
        }
        else
        {
            menos = menos + 1;
        }
    }

    printf("Mas de 2000: %d\n",mas);
    printf("Menos de 2000: %d",menos);

    return 0;
}

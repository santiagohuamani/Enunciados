 #include <stdio.h>

int main()
{
    int i,num,mayor,suma;
    float promedio;

    for(i=1;i<=15;i++)
    {
        printf("Ingrese numero: ");
        scanf("%d",&num);

        suma = suma + num;

        if(i==1)
        {
            mayor=num;
        }
        else
        {
            if(num>mayor)
            {
                mayor=num;
            }
        }
    }

    promedio = suma/15;

    printf("Promedio: %.2f\n",promedio);
    printf("Mayor: %d",mayor);

    return 0;
}

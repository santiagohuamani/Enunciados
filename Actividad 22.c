 #include <stdio.h>

int main()
{
    int i,venta,total,contador,mayor;


    for(i=1;i<=20;i++)
    {
        printf("Ingrese venta: ");
        scanf("%d",&venta);

        total=total+venta;
        contador=contador+1;

        if(venta>mayor)
        {
            mayor=venta;
        }

        if(contador==15)
        {
            printf("Total vendedor: ");
            printf("%d\n",total);
        }
    }

    printf("Mayor venta: ");
    printf("%d",mayor);

    return 0;
}

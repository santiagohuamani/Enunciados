#include <stdio.h>

int main()
{
    int a,b,total=0,A=0,B=0;
    float resultA=0, resultB=0;

    printf("Producto A (1 si / 0 no): ");
    scanf("%d",&a);

    printf("Producto B (1 si / 0 no): ");
    scanf("%d",&b);

    while(a==1 || b==1)
    {
        total++;

        if(a==1)
            A++;

        if(b==1)
            B++;

        printf("Producto A: ");
        scanf("%d",&a);

        printf("Producto B: ");
        scanf("%d",&b);
    }

    if(total>0)
    {
        resultA = A*100.0/total;
        resultB = B*100.0/total;
    }

    printf("Total encuestados: %d\n",total);
    printf("Porcentaje A: %.2f\n",resultA);
    printf("Porcentaje B: %.2f",resultB);

    return 0;
}

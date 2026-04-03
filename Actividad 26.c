#include <stdio.h>

int main()
{
    int dia,mes,anio;

    printf("Dia: ");
    scanf("%d",&dia);

    printf("Mes: ");
    scanf("%d",&mes);

    printf("Anio: ");
    scanf("%d",&anio);

    if(mes>=1 && mes<=12 && dia>=1 && dia<=31)
    printf("Fecha valida");
    else
    printf("Fecha invalida");

    return 0;
}

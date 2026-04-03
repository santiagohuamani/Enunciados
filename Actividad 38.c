#include <stdio.h>

int main()
{
    int fecha,dia,mes,anio;

    printf("Fecha (ddmmaa): ");
    scanf("%d",&fecha);

    dia=fecha/10000;
    mes=(fecha/100)%100;
    anio=fecha%100;

    printf("Dia %d\n",dia);
    printf("Mes %d\n",mes);
    printf("Anio %d",anio);

    return 0;
}

#include <stdio.h>

int main()
{
    int dia,mes;

    printf("Dia: ");
    scanf("%d",&dia);

    printf("Mes: ");
    scanf("%d",&mes);

    if((dia>=21 && mes==3) || (dia<=20 && mes==4))
    printf("Aries");

    return 0;
}

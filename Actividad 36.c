#include <stdio.h>

int main()
{
    int anio;

    printf("Anio: ");
    scanf("%d",&anio);

    if((anio%4==0 && anio%100!=0) || anio%400==0)
    printf("Bisiesto");
    else
    printf("No bisiesto");

    return 0;
}

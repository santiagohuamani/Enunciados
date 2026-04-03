#include <stdio.h>

int main()
{
    float precio,efectivo,vuelto;

    printf("Precio: ");
    scanf("%f",&precio);

    printf("Efectivo: ");
    scanf("%f",&efectivo);

    vuelto=efectivo-precio;

    printf("Vuelto %.2f",vuelto);

    return 0;
}

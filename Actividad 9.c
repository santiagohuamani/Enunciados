#include <stdio.h>

int main()
{
    char categoria;
    int horas;
    float sueldo;

    printf("Ingrese categoria: ");
    scanf(" %c",&categoria);
    printf("Ingrese horas: ");
    scanf("%d",&horas);

    if(categoria=='A')
        sueldo = horas * 200;
    else if(categoria=='B')
        sueldo = horas * 180;
    else if(categoria=='C')
        sueldo = horas * 150;
    else
        sueldo = 0;

    printf("Sueldo: %.2f",sueldo);

    return 0;
}

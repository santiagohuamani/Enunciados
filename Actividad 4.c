#include <stdio.h>

int main()
{
    float fuerza,superficie,presion;

    printf("Ingrese fuerza: ");
    scanf("%f",&fuerza);
    printf("Ingrese superficie: ");
    scanf("%f",&superficie);

    presion = fuerza/superficie;

    printf("Presion: %.2f",presion);

    return 0;
}

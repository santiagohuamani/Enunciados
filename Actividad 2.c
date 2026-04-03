#include <stdio.h>

int main()
{
    float a,b,perimetro,area;

    printf("Ingrese lado a: ");
    scanf("%f",&a);
    printf("Ingrese lado b: ");
    scanf("%f",&b);

    perimetro = 2*a + 2*b;
    area = a*b;

    printf("Perimetro: %.2f\n",perimetro);
    printf("Area: %.2f",area);

    return 0;
}



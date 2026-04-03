 #include <stdio.h>

int main()
{
    float r1,r2,r3,r4,r5,total;

    printf("Ingrese resistencia 1: ");
    scanf("%f",&r1);
    printf("Ingrese resistencia 2: ");
    scanf("%f",&r2);
    printf("Ingrese resistencia 3: ");
    scanf("%f",&r3);
    printf("Ingrese resistencia 4: ");
    scanf("%f",&r4);
    printf("Ingrese resistencia 5: ");
    scanf("%f",&r5);

    total = r1+r2+r3+r4+r5;

    printf("Resistencia total: %.2f",total);

    return 0;
}

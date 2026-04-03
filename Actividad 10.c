 #include <stdio.h>

int main()
{
    float sueldoBasico, total;
    int categoria, hijos;

    printf("Ingrese sueldo basico: ");
    scanf("%f",&sueldoBasico);
    printf("Ingrese categoria (1 o 2): ");
    scanf("%d",&categoria);
    printf("Ingrese cantidad de hijos: ");
    scanf("%d",&hijos);

    total = sueldoBasico + (hijos * 300);

    if(hijos > 4)
        total = total + 200;

    if(categoria == 1)
        total = total + (sueldoBasico * 0.10);
    else if(categoria == 2)
        total = total + (sueldoBasico * 0.20);

    printf("Sueldo total: %.2f",total);

    return 0;
}

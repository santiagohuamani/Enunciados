 #include <stdio.h>

int main()
{
    int edad, horas;
    float importe, neto, total;

    printf("Ingrese edad: ");
    scanf("%d",&edad);
    printf("Ingrese horas trabajadas: ");
    scanf("%d",&horas);

    if(horas >= 20)
        importe = horas * 50;
    else
        importe = 20 * 50;

    if(edad > 70)
        neto = importe - (importe * 0.50);
    else if(edad > 60)
        neto = importe - (importe * 0.30);
    else if(edad > 50)
        neto = importe - (importe * 0.20);
    else
        neto = importe;

    total = neto + (neto * 0.33);

    printf("Importe sin impuestos: %.2f\n",neto);
    printf("Importe con impuestos: %.2f",total);

    return 0;
}

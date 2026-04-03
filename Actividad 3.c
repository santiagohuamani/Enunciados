 #include <stdio.h>

int main()
{
    int hombres,mujeres,total;
    float ph,pm;

    printf("Ingrese cantidad de hombres: ");
    scanf("%d",&hombres);
    printf("Ingrese cantidad de mujeres: ");
    scanf("%d",&mujeres);

    total = hombres + mujeres;

    ph = (hombres*100)/total;
    pm = (mujeres*100)/total;

    printf("Porcentaje hombres: %.2f\n",ph);
    printf("Porcentaje mujeres: %.2f",pm);

    return 0;
}


#include <stdio.h>

int main()
{
    int dni,anio,masculino,femenino,menores,dni30,total;
    char sexo;

    printf("DNI: ");
    scanf("%d",&dni);

    while(dni>=0)
    {
        printf("Sexo: ");
        scanf("%c",&sexo);

        printf("Anio nacimiento: ");
        scanf("%d",&anio);

        total++;

        if(sexo=='M')
        masculino++;
        else
        femenino++;

        if(2026-anio<18)
        menores++;

        if(dni<30000000)
        dni30++;

        printf("DNI: ");
        scanf("%d",&dni);
    }

    printf("Masculinos %d\n",masculino);
    printf("Femeninos %d\n",femenino);

    if(total>0)
    printf("Porcentaje menores %.2f\n",(float)menores*100/total);

    printf("DNI menores a 30M %d",dni30);

    return 0;
}

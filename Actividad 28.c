#include <stdio.h>

int main()
{
    int i,cantNotas,tpAprobados,pocasNotas;
    float tp,nota,suma,prom,mayorProm,promCurso;

    for(i=1;i<=50;i++)
    {
       printf("Nota TP: ");
       scanf("%f",&tp);

        suma=suma+tp;
        cantNotas++;

        printf("Nota (-1 termina): ");
        scanf("%f",&nota);

        while(nota>=0)
        {
            suma=suma+nota;
            cantNotas++;

            printf("Nota: ");
            scanf("%f",&nota);
        }

        prom=suma/cantNotas;

        if(prom>mayorProm)
        mayorProm=prom;

        if(cantNotas<=2)
        pocasNotas++;

        if(tp>=6)
        tpAprobados++;

        promCurso=promCurso+prom;
    }

    promCurso=promCurso/50;

    printf("Mayor promedio %.2f\n",mayorProm);
    printf("Promedio curso %.2f\n",promCurso);
    printf("Alumnos pocas notas %d\n",pocasNotas);
    printf("TP aprobados %d",tpAprobados);

    return 0;
}

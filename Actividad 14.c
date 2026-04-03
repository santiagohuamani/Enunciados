 #include <stdio.h>

int main()
{
    int h,m,s,opcion;
    int totalSeg;

    printf("Ingrese horas: ");
    scanf("%d",&h);
    printf("Ingrese minutos: ");
    scanf("%d",&m);
    printf("Ingrese segundos: ");
    scanf("%d",&s);
    printf("Unidad final (1 seg / 2 min / 3 hs): ");
    scanf("%d",&opcion);

    totalSeg = h*3600 + m*60 + s;

    if(opcion==1)
        printf("Total segundos: %d",totalSeg);
    else if(opcion==2)
        printf("Total minutos: %d",totalSeg/60);
    else if(opcion==3)
        printf("Total horas: %d",totalSeg/3600);

    return 0;
}

 #include <stdio.h>

int main()
{
    int i,nota,suma,contador;


    for(i=1;i<=30;i++)
    {
        printf("Ingrese nota: ");
        scanf("%d",&nota);

        suma=suma+nota;
        contador=contador+1;

        if(contador==10)
        {
            printf("Promedio alumno: ");
            printf("%d\n",suma/10);
        }
    }
    return 0;
}

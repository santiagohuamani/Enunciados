#include <stdio.h>

int main()
{
    int i,nota;
    char nombre[30];

    for(i=1;i<=15;i++)
    {
        printf("Nombre: ");
        scanf("%s",nombre);

        printf("Nota: ");
        scanf("%d",&nota);

        if(nota>8)
        {
            printf("%s\n",nombre);
        }
    }

    return 0;
}

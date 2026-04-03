 #include <stdio.h>

int main()
{
    int base,exponente,i,resultado;

    printf("Ingrese base: ");
    scanf("%d",&base);

    printf("Ingrese exponente: ");
    scanf("%d",&exponente);


    for(i=1;i<=10;i++)
    {
        if(i<=exponente)
        {
            resultado = resultado * base;
        }
    }

    printf("Resultado: %d",resultado);

    return 0;
}

 #include <stdio.h>

int main()
{
    int num;
    float resultado;

    printf("Ingrese numero: ");
    scanf("%d",&num);

    resultado = num/8.0;

    printf("Resultado: %.2f",resultado);

    return 0;
}

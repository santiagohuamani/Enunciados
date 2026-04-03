 #include <stdio.h>

int main()
{
    float peso, altura, imc;

    printf("Ingrese peso: ");
    scanf("%f",&peso);
    printf("Ingrese altura: ");
    scanf("%f",&altura);

    imc = peso / (altura * altura);

    if(imc < 20)
        printf("Bajo peso");
    else if(imc <= 25)
        printf("Peso ideal");
    else
        printf("Excedido");

    return 0;
}


#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Ingrese 3 numeros: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a<b && b<c)
        printf("Estan en forma ascendente");
    else
        printf("No estan en forma ascendente");

    return 0;
}

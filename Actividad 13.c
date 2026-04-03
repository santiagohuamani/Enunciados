 #include <stdio.h>

int main()
{
    int a,b,c;

    printf("Ingrese 3 numeros: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a==b && b==c)
        printf("Todos iguales");
    else if(a!=b && a!=c && b!=c)
        printf("Todos distintos");
    else
        printf("Dos iguales y uno distinto");

    return 0;
}

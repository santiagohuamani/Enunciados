#include <stdio.h>

int main()
{
    int opcion,n,i,fact=1,a=1,b=1,c;

    printf("1 Salir\n");
    printf("2 Fibonacci\n");
    printf("3 Factorial\n");

    scanf("%d",&opcion);

    if(opcion==1)
    {
        printf("Programa finalizado");
    }
    else if(opcion==2)
    {
        printf("%d\n",a);
        printf("%d\n",b);

        for(i=1;i<=8;i++)
        {
            c=a+b;
            printf("%d\n",c);

            a=b;
            b=c;
        }
    }
    else if(opcion==3)
    {
        printf("Numero: ");
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
      
        printf("Factorial: %d",fact);
    }
  
    return 0;
}

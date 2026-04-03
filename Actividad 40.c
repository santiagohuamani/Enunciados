#include <stdio.h>

int main()
{
    int p,q,i,factP=1,factQ=1,factPQ=1;
    float resultado;

    printf("P: ");
    scanf("%d",&p);

    printf("Q: ");
    scanf("%d",&q);

    for(i=1;i<=p;i++)
    factP=factP*i;

    for(i=1;i<=q;i++)
    factQ=factQ*i;

    for(i=1;i<=(p-q);i++)
    factPQ=factPQ*i;

    resultado=factP/(factPQ*factQ);

    printf("Resultado %.2f",resultado);

    return 0;
}

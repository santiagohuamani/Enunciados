 #include <stdio.h>

int main()
{
    float sup1,sup2,sup3;
    float pob1,pob2,pob3;
    float d1,d2,d3;

    printf("Superficie pais 1: ");
    scanf("%f",&sup1);
    printf("Poblacion pais 1: ");
    scanf("%f",&pob1);
    printf("Superficie pais 2: ");
    scanf("%f",&sup2);
    printf("Poblacion pais 2: ");
    scanf("%f",&pob2);
    printf("Superficie pais 3: ");
    scanf("%f",&sup3);
    printf("Poblacion pais 3: ");
    scanf("%f",&pob3);

    d1 = pob1/sup1;
    d2 = pob2/sup2;
    d3 = pob3/sup3;

    if(d1>d2 && d1>d3)
        printf("Pais 1 es el mas denso");
    else if(d2>d1 && d2>d3)
        printf("Pais 2 es el mas denso");
    else
        printf("Pais 3 es el mas denso");

    return 0;
}

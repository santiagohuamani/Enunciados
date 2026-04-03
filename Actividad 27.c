#include <stdio.h>

int main()
{
    int factura,producto,cantidad,masVendido=0,mayorCant=0;
    float precio,importe,mayorImporte=0;

    printf("Producto (999 termina): ");
    scanf("%d",&producto);

    while(producto!=999)
    {
        printf("Factura: ");
        scanf("%d",&factura);

        printf("Cantidad: ");
        scanf("%d",&cantidad);

        printf("Precio: ");
        scanf("%f",&precio);

        importe=cantidad*precio;

        if(cantidad>mayorCant)
        {
            mayorCant=cantidad;
            masVendido=producto;
        }

        if(importe>mayorImporte)
        mayorImporte=importe;

        printf("Producto: ");
        scanf("%d",&producto);
    }

    printf("Mas vendido: %d\n",masVendido);
    printf("Mayor importe: %.2f",mayorImporte);

    return 0;
}

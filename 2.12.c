#include <stdio.h>
int main ()
{
    int coddesc, precio;
    float desc, Final;

    printf(" ingrese el precio del producto: ");
    scanf("%d",&precio);
    printf("ingrese 1 si tiene descuento y 0 si no tiene descuento: ");
    scanf("%d",&coddesc);

    desc= coddesc *((20*precio)/100);
    Final= precio - desc;

    printf("\nel descuento aplicado seria: %f \nel total a pagar seria: $%.2f",desc, Final);
}

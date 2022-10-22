
#include <stdio.h>
int main () {
int unidades, empanadas, docena, precio;

printf("ingrese cantidad de empanadas que desea comprar ");
scanf("%d", &empanadas);

docena = empanadas/12;
unidades= empanadas%12;
precio= docena*300+unidades*30;
printf("\nEl precio es: $%d",precio);

return 0;
 }



#include <stdio.h>
void main () {
int nota1, nota2;
float prom;

printf("ingrese las notas de las evaluaciones ");
scanf("%d%d", &nota1, &nota2);

prom = (float)(nota1 + nota2)/2;
printf("El promedio es: %.2f ",prom);

system("pause");
return 0;
 }

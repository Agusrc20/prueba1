

#include <stdio.h>
#define PI 3.1416

int main()
{
  int radio, sup, per, vol;

  printf("\ningresar el valor del radio del circulo (positivo): ");
  scanf("%d", &radio);

  sup= PI*radio*radio;
  per= 2*PI*radio;
  vol= (4/3)*PI*radio*radio*radio;


 printf("el circulo de radio: %d \ntiene como superficie: %d \nsu perimetro es de: %d \ny su volumen es: %d \n", radio, sup, per, vol);

  system("pause");
  return 0;
}

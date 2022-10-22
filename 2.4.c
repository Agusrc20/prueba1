
#include <stdio.h>
int main()
{
  int medidapies,yarda,pulgadas,cms,mts;
  printf("\nintroduzca una medida en pies: ");
  scanf("%d", &medidapies);

  yarda= medidapies/3;
  pulgadas= medidapies*12;
  cms= pulgadas*2.54;
  mts= cms/100;

 printf("YARDAS: %d \nPULGADAS: %d \nCMS: %d \nMTS: %d \n", yarda,pulgadas,cms,mts);

  system("pause");
  return 0;
}

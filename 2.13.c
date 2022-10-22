#include <stdio.h>
int main()
{
  int num, uno, dos, tres, cuatro, suma, cinco, seis, Final;
  printf("\nintroduzca un numero entero positivo de cuatro cifras: ");
  scanf("%d", &num);

  uno= num%10;
  dos= num/10;
  tres= dos%10+uno;
  cuatro= dos/10;
  suma= tres+ cuatro%10;
  cinco= suma+cuatro/10;
  seis= cinco%10+cinco/10;
  Final= seis%10+seis/10;

  printf("\nla cifra Final es: %d\n", Final);

  system("pause");
  return 0;
}

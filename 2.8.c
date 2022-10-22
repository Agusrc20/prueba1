#include <stdio.h>
int main()
{
  int ddmmaa, dd, mm, aa, aammdd;
  printf("\nintroduzca una fecha en formato ddmmaa");
  scanf("%d", &ddmmaa);

  dd= ddmmaa/10000;
  mm= (ddmmaa%10000)/100;
  aa= (ddmmaa%10000)%100;
  aammdd= dd+ mm*100+aa*10000;

  printf("\nla fecha en formato aammdd es: %d", aammdd);

  return 0;
}

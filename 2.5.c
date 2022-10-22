
#include <stdio.h>
int main()
{
  int tarro1, tarro4, tarro20, total;

  printf("\ncantidad de tarros: ");
  scanf("%d", &total);

  tarro1= (50*total)/100;
  tarro4= (30*total)/100;
  tarro20= (20*total)/100;

 printf("total tarros de 1lt: %d \ntotal tarros de 4l: %d \ntotal tarros de 20l: %d \n", tarro1, tarro4, tarro20);

  system("pause");
  return 0;
}


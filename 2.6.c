
#include <stdio.h>
int main()
{
  int cantu, canpri, recaudacion;

  printf("\ningresar el total de los pasajes clase turista vendidos: ");
  scanf("%d", &cantu);
  printf("\ningresar el total de los pasajes primera clase vendidos: ");
  scanf("%d", &canpri);

  recaudacion= 8800*cantu+ (8800*1.30)*canpri;


 printf("la recaudacion del vuelo es: %d \n", recaudacion);

  system("pause");
  return 0;
}


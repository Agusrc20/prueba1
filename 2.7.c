#include <stdio.h>
int main ()
{
    int cen,dec, uni,num, resto;
    printf("ingrese un numero de tres cifras: ");
    scanf("%d", &num);

    cen= num/100;
    resto= num%100;
    dec= num/10;
    uni= num%10;
    printf("el numero descompuesto en cifras quedaria: \ncentena: %d \ndecena: %d \nunidad: %d", dec,cen,uni);
}

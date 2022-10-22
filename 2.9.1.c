#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kib;
    float mib, gib,tib;

    printf("\ningrese una medida en kib: ");
    scanf("%d",&kib);

    mib= (float)kib/1024;
    gib= (float)mib/1024;
    tib= (float)gib/1024;

    printf("MIB: %0.6f \nGIB: %0.6f \nTIB: %0.6f\n", mib,gib,tib);

    system("pause");

    return 0;
}

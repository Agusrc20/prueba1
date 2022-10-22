#include <stdio.h>

int main()
{
    int kib;
    float mib, gib,tib;

    printf("\ningrese una medida en kib: ");
    scanf("%d",&kib);

    mib= (float)kib/1024;
    gib= (float)kib/1024/1024;
    tib= (float)kib/1024/1024/1024;

    printf("MIB: %f \nGIB: %f \nTIB: %f", mib,gib,tib);

    system("pause");
    return 0;
}

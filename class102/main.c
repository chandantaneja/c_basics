#include <stdio.h>
#include <stdlib.h>

main()
{
    int a=25;
    printf("\n a=%d", a);
    {
        int a=10;
        printf("\n a=%d",a);
    }
    printf("\n a=%d",a);
    getch();
}

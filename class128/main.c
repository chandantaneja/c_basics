#include <stdio.h>
#include <stdlib.h>

main()
{
    int a=10;
    int *p;
    p=&a;
    printf("\n\n\t\t Value of a = %d", a);
    printf("\n\n\t\t Value of a = %d", *p);
    printf("\n\n\t\t   Add of a = %u", &a);
    printf("\n\n\t\t   Add of a = %u", &p);
}

#include <stdio.h>
#include <stdlib.h>

main()
{
    int a=10;
    int *p;
    p=&a;
    printf("\n\n\t\t a = %d", *p);
    *p=1000;
    printf("\n\n\t\t a = %d", a);
    getch();

}

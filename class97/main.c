#include <stdio.h>
#include <stdlib.h>

main()
{
    int i;
    void m1();
    for (i=0;i<5;i++)
        m1();
    getch();
}
m1()
{
    static int a=0;
    printf("\n %d", a);
    a++;
}
